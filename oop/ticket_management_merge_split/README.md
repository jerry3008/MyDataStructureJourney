# Ticket Management System with Merge and Split Support (C++)

This task extends an in-memory ticket management system by adding advanced support for merging and splitting ticket entities while preserving backward compatibility with existing ticket sale, refund, and reporting functionality.

---

## Objective

Enhance the `TicketManagementSystem` to support:

- Merging multiple tickets into a single new ticket entity
- Splitting one ticket into multiple new ticket entities
- Invalidating original transaction IDs after merge or split
- Preserving compatibility with existing ticket sales, refunds, and reporting operations

---

## Existing Functionality

The system already supports:

- `sell_ticket(journey_id, price)`
- `sell_group_ticket(journey_id, num_tickets, price_per_ticket)`
- `refund_ticket(trans_id)`
- `get_transaction_info(trans_id)`
- `total_sales()`
- `journey_sales_summary()`

---

## New Features

### `merge_tickets(const std::vector<std::string>& trans_ids)`
Merges two or more tickets into one new ticket entity.

Rules:
- All provided transaction IDs must exist
- All tickets must have the same `journey_id`
- If any transaction ID is invalid or the journeys differ, return an empty string
- The new merged ticket:
  - gets a new unique transaction ID
  - has total price equal to the sum of all merged tickets
  - is treated as an individual ticket
  - includes `is_merged = true`
- All original transaction IDs are invalidated

Returns:
- new merged transaction ID on success
- empty string on failure

---

### `split_ticket(const std::string& trans_id, int num_splits)`
Splits one existing ticket into multiple new individual ticket entities.

Rules:
- The original transaction ID must exist
- `num_splits` must be at least 2
- If invalid, return an empty vector
- The original ticket is invalidated
- The total original price is evenly distributed across the new tickets
- Each new ticket:
  - gets a unique transaction ID
  - is treated as an individual ticket
  - is not part of a group

Returns:
- list of new transaction IDs on success
- empty vector on failure

---

## Required Adjustments

Existing methods may need to be updated so they correctly handle merged and split tickets, especially:

- `get_transaction_info(trans_id)`
- `refund_ticket(trans_id)`

These methods must work correctly with:
- original tickets
- merged tickets
- split tickets

---

## Design Focus

This task emphasizes:

- Extending an existing system without breaking original behavior
- Managing transaction lifecycle state carefully
- Supporting entity invalidation and replacement
- Keeping reporting functions consistent after structural changes to ticket entities

---

## Expected Outcome

After implementation, the system should:

- Continue supporting ticket sales, refunds, and summaries
- Allow valid tickets to be merged into one replacement ticket
- Allow valid tickets to be split into multiple replacement tickets
- Correctly invalidate old transaction IDs
- Preserve correct sales totals and journey summaries after merge and split operations

---

## Key Concepts

- OOP-based system extension
- Transaction lifecycle management
- Entity invalidation and replacement
- Backward-compatible design
- Aggregation and decomposition of records

---

## Build and Run

```bash
g++ -std=c++17 oop/ticket_management_merge_split/main.cpp -o ticket_management
./ticket_management
Notes
This task belongs under OOP.
Merged tickets are individual tickets, not groups.
Split tickets are also individual tickets, not groups.
Original transaction IDs must be invalidated after a successful merge or split.
Reporting and refund behavior must remain correct after these transformations.