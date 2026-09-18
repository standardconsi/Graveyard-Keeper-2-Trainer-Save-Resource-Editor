# Build: a66ab3d20ef21ad31f859f7bd6696956

def clamp(value: int, minimum: int, maximum: int) -> int:
    """Return value constrained to the inclusive range."""
    return max(minimum, min(maximum, value))
