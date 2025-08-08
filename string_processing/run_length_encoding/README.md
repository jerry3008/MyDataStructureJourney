# Run-Length Encoding (RLE)

## Task
Implement a C++ function `std::string encode_rle(const std::string& s)` that performs run-length encoding on an **alphanumeric** input string. Each run is encoded as the character followed immediately by its count.

- Only include **alphanumeric** characters (`0-9`, `A-Z`, `a-z`) in the output.
- Ignore and skip any non-alphanumeric characters entirely.
- Input length: up to 500 characters.

## Examples
- Input: `"aaabbcccdde"` → Output: `"a3b2c3d2e1"`
- Input: `"aaa@@bb!!c#d**e"` → Output: `"a3b2c1d1e1"`

## Notes
- Consecutive runs are counted; single characters must be suffixed with `1`.
