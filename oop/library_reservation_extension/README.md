# Library Reservation and Availability Extension (C++)

This task extends a library management system by adding support for book reservations and user notification when borrowed books become available again.

The original system already supports adding books, checking availability, borrowing, returning, and viewing borrow history. The new functionality introduces reservation queues and availability notifications.

---

## Objective

Enhance the library system with the following features:

- Allow users to reserve books that are currently borrowed
- Keep track of reservation order
- Notify the next user in line when a reserved book becomes available
- Allow querying the current next reservation for a book

---

## Existing Functionality

The system already supports:

- `add_book(book_id, title)`
- `check_availability(book_id)`
- `borrow_book(user_id, book_id)`
- `return_book(book_id)`
- `get_borrow_history(book_id)`

---

## New Features

### `reserve_book(const std::string& user_id, const std::string& book_id)`
Allows a user to reserve a borrowed book.

Returns:
- `true` if:
  - the book exists
  - the book is currently borrowed
  - the user has not already reserved it
- `false` otherwise

Behavior:
- Reservations are queued in order
- When the book is returned, the first user in the queue gets the next chance to borrow it

---

### `notify_availability(const std::string& book_id)`
Checks if a reserved book has users waiting.

Returns:
- the `user_id` of the next user in the reservation queue
- `std::nullopt` if there are no reservations

---

### `check_reservation(const std::string& book_id)`
Checks who is first in line for a reserved book.

Returns:
- the `user_id` of the first person in the reservation queue
- `std::nullopt` if no one has reserved the book

---

## Design Focus

- Extending existing behavior without breaking current functionality
- Managing reservation queues cleanly
- Preserving borrow history while introducing reservation tracking
- Using clear object-oriented structure for books, borrowing state, and reservation state

---

## Expected Outcome

After implementation, the system should:

- Support reservation of borrowed books
- Prevent duplicate reservations by the same user
- Track reservation order correctly
- Expose the next user to notify when a book becomes available
- Maintain original borrowing and return behavior

---

## Key Concepts

- Queue-based reservation management
- Backward-compatible system extension
- State tracking for availability, borrowing, and reservation
- OOP-based system organization

---

## Build and Run

```bash
g++ -std=c++17 oop/library_reservation_extension/main.cpp -o library_reservation
./library_reservation
Notes
This task belongs under OOP.
Focus on preserving existing library behavior while adding reservation support.
Reservation order must be maintained accurately.
Notification logic should reflect the next user waiting for the book.