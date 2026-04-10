# Email System Extension with Undo Send and Logout Support (C++)

This task extends an email management system by adding support for undoing sent emails and logging users out.

The existing system already supports sending emails, querying inboxes, counting sent emails, and flagging emails. The new functionality introduces message recall behavior and account activity control.

---

## Objective

Enhance the email system with the following features:

- Undo the most recent sent email from a user by subject
- Log out a user and disable their account activity
- Prevent emails from being sent to or from logged-out users

---

## Existing Functionality

The system already supports:

- `send_email(from_user, to_user, subject, body)`
- `query_inbox(user)`
- `sent_emails_count()`
- `flag_email(user, subject)`

---

## New Features

### `undo_send(const std::string& from_user, const std::string& subject)`
Removes the most recent email sent by `from_user` with the given subject from the recipient’s inbox.

Returns:
- `true` if the email was successfully removed
- `false` otherwise

Behavior:
- Only the most recent matching email should be undone
- The removal affects the recipient’s inbox

---

### `logout_user(const std::string& user)`
Disables account activity for the specified user.

Returns:
- `true` if successful
- `false` otherwise

Behavior:
- A logged-out user cannot send emails
- Emails cannot be sent to a logged-out user
- If either sender or recipient is logged out, `send_email` must return `false`

---

## Design Focus

This task emphasizes:

- Extending an existing OOP-based email system
- State management for user activity
- Operation reversal through undo logic
- Preserving existing email functionality while introducing new behavior

---

## Expected Outcome

After implementation, the system should:

- Continue supporting basic email operations
- Prevent email activity involving logged-out users
- Support undoing the most recent sent email by subject
- Maintain accurate inbox contents and sent email state

---

## Key Concepts

- OOP-based system extension
- User state management
- Undo/reversal behavior
- Inbox and message lifecycle handling
- Backward-compatible feature enhancement

---

## Build and Run

g++ -std=c++17 oop/email_system_undo_logout/main.cpp -o email_system
./email_system
Notes
This task belongs under OOP.
Focus on preserving original behavior while adding logout and undo-send support.
The undo feature should only remove the most recent matching sent email.
Logged-out users should be completely inactive in email send operations.