name: Pull Request Template
description: Standard template for all pull requests

body:
  - type: markdown
    attributes:
      value: "## Pull Request"

  - type: textarea
    id: description
    attributes:
      label: Description
      description: "Brief description of the changes"
    validations:
      required: true

  - type: textarea
    id: motivation
    attributes:
      label: Motivation and Context
      description: "Why are these changes needed?"
    validations:
      required: true

  - type: textarea
    id: changes
    attributes:
      label: Changes Made
      description: "List the specific changes in this PR"
      placeholder: |
        - Change 1
        - Change 2
        - Change 3
    validations:
      required: true

  - type: textarea
    id: testing
    attributes:
      label: Testing
      description: "Describe the testing you've done"
    validations:
      required: true

  - type: checkboxes
    id: checklist
    attributes:
      label: Checklist
      options:
        - label: Code follows the project style guidelines
        - label: Self-review completed
        - label: Comments added for complex code
        - label: Documentation updated
        - label: Tests added or updated
        - label: All tests passing
      validations:
        required: true
