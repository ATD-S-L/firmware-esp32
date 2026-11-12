# Third-Party Libraries

This directory contains third-party libraries and dependencies for the project.

## Adding Libraries

### For ESP-IDF
Place components in this directory or use the `idf.py add-dependency` command.

### For PlatformIO
Manage libraries via `platformio.ini` with `lib_deps`.

### For Arduino
Libraries can be added via Library Manager or placed in this directory.

## Organization

- Each library should be in its own subdirectory
- Include LICENSE files for each dependency
- Document any modifications or patches applied

## Example Structure

```
lib/
├── some-library/
│   ├── src/
│   ├── include/
│   ├── LICENSE
│   └── README.md
└── another-library/
    ├── ...
```
