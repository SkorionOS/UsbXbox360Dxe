/** @file
  Semantic key name to USB HID scan code mapping
  
  This module provides human-readable key names for configuration files,
  making it easier to map controller buttons to keyboard keys without
  memorizing hexadecimal scan codes.
  
  Copyright (c) 2025. All rights reserved.
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef _XBOX360_KEY_NAMES_H_
#define _XBOX360_KEY_NAMES_H_

#include <Uefi.h>
#include <Library/BaseLib.h>

//
// Key name to USB HID scan code mapping entry
//
typedef struct {
  CONST CHAR8  *Name;
  UINT8        ScanCode;
} KEY_NAME_MAP;

//
// Key name mapping table (USB HID Usage Table)
// Reference: USB HID Usage Tables 1.12, Chapter 10: Keyboard/Keypad Page
//
STATIC CONST KEY_NAME_MAP mKeyNameTable[] = {
  // Letters (A-Z)
  { "KeyA", 0x04 }, { "KeyB", 0x05 }, { "KeyC", 0x06 }, { "KeyD", 0x07 },
  { "KeyE", 0x08 }, { "KeyF", 0x09 }, { "KeyG", 0x0A }, { "KeyH", 0x0B },
  { "KeyI", 0x0C }, { "KeyJ", 0x0D }, { "KeyK", 0x0E }, { "KeyL", 0x0F },
  { "KeyM", 0x10 }, { "KeyN", 0x11 }, { "KeyO", 0x12 }, { "KeyP", 0x13 },
  { "KeyQ", 0x14 }, { "KeyR", 0x15 }, { "KeyS", 0x16 }, { "KeyT", 0x17 },
  { "KeyU", 0x18 }, { "KeyV", 0x19 }, { "KeyW", 0x1A }, { "KeyX", 0x1B },
  { "KeyY", 0x1C }, { "KeyZ", 0x1D },
  
  // Numbers (1-0)
  { "Key1", 0x1E }, { "Key2", 0x1F }, { "Key3", 0x20 }, { "Key4", 0x21 },
  { "Key5", 0x22 }, { "Key6", 0x23 }, { "Key7", 0x24 }, { "Key8", 0x25 },
  { "Key9", 0x26 }, { "Key0", 0x27 },
  
  // Control keys
  { "KeyEnter", 0x28 },
  { "KeyReturn", 0x28 },      // Alias for Enter
  { "KeyEscape", 0x29 },
  { "KeyEsc", 0x29 },          // Alias
  { "KeyBackspace", 0x2A },
  { "KeyTab", 0x2B },
  { "KeySpace", 0x2C },
  { "KeyMinus", 0x2D },
  { "KeyEqual", 0x2E },
  { "KeyLeftBracket", 0x2F },
  { "KeyRightBracket", 0x30 },
  { "KeyBackslash", 0x31 },
  { "KeySemicolon", 0x33 },
  { "KeyApostrophe", 0x34 },
  { "KeyQuote", 0x34 },        // Alias
  { "KeyGrave", 0x35 },
  { "KeyTilde", 0x35 },        // Alias
  { "KeyComma", 0x36 },
  { "KeyPeriod", 0x37 },
  { "KeyDot", 0x37 },          // Alias
  { "KeySlash", 0x38 },
  { "KeyCapsLock", 0x39 },
  
  // Function keys (F1-F12)
  { "KeyF1", 0x3A }, { "KeyF2", 0x3B }, { "KeyF3", 0x3C }, { "KeyF4", 0x3D },
  { "KeyF5", 0x3E }, { "KeyF6", 0x3F }, { "KeyF7", 0x40 }, { "KeyF8", 0x41 },
  { "KeyF9", 0x42 }, { "KeyF10", 0x43 }, { "KeyF11", 0x44 }, { "KeyF12", 0x45 },
  
  // Special keys
  { "KeyPrintScreen", 0x46 },
  { "KeyPrtSc", 0x46 },        // Alias
  { "KeyScrollLock", 0x47 },
  { "KeyPause", 0x48 },
  { "KeyInsert", 0x49 },
  { "KeyIns", 0x49 },          // Alias
  { "KeyHome", 0x4A },
  { "KeyPageUp", 0x4B },
  { "KeyPgUp", 0x4B },         // Alias
  { "KeyDelete", 0x4C },
  { "KeyDel", 0x4C },          // Alias
  { "KeyEnd", 0x4D },
  { "KeyPageDown", 0x4E },
  { "KeyPgDown", 0x4E },       // Alias
  { "KeyPgDn", 0x4E },         // Alias
  
  // Arrow keys
  { "KeyRight", 0x4F },
  { "KeyLeft", 0x50 },
  { "KeyDown", 0x51 },
  { "KeyUp", 0x52 },
  { "KeyArrowRight", 0x4F },   // Aliases
  { "KeyArrowLeft", 0x50 },
  { "KeyArrowDown", 0x51 },
  { "KeyArrowUp", 0x52 },
  
  // Keypad
  { "KeyNumLock", 0x53 },
  { "KeyKpDivide", 0x54 },
  { "KeyKpSlash", 0x54 },      // Alias
  { "KeyKpMultiply", 0x55 },
  { "KeyKpStar", 0x55 },       // Alias
  { "KeyKpMinus", 0x56 },
  { "KeyKpPlus", 0x57 },
  { "KeyKpEnter", 0x58 },
  { "KeyKp1", 0x59 }, { "KeyKp2", 0x5A }, { "KeyKp3", 0x5B },
  { "KeyKp4", 0x5C }, { "KeyKp5", 0x5D }, { "KeyKp6", 0x5E },
  { "KeyKp7", 0x5F }, { "KeyKp8", 0x60 }, { "KeyKp9", 0x61 },
  { "KeyKp0", 0x62 },
  { "KeyKpDot", 0x63 },
  { "KeyKpPeriod", 0x63 },     // Alias
  
  // Additional keys
  { "KeyApplication", 0x65 },
  { "KeyMenu", 0x65 },         // Alias
  
  // Modifier keys
  { "KeyLeftCtrl", 0xE0 },
  { "KeyLeftControl", 0xE0 },  // Alias
  { "KeyLCtrl", 0xE0 },        // Short alias
  { "KeyLeftShift", 0xE1 },
  { "KeyLShift", 0xE1 },       // Short alias
  { "KeyLeftAlt", 0xE2 },
  { "KeyLAlt", 0xE2 },         // Short alias
  { "KeyLeftMeta", 0xE3 },
  { "KeyLeftWin", 0xE3 },      // Alias
  { "KeyLeftSuper", 0xE3 },    // Alias
  { "KeyLWin", 0xE3 },         // Short alias
  { "KeyRightCtrl", 0xE4 },
  { "KeyRightControl", 0xE4 }, // Alias
  { "KeyRCtrl", 0xE4 },        // Short alias
  { "KeyRightShift", 0xE5 },
  { "KeyRShift", 0xE5 },       // Short alias
  { "KeyRightAlt", 0xE6 },
  { "KeyRAlt", 0xE6 },         // Short alias
  { "KeyRightMeta", 0xE7 },
  { "KeyRightWin", 0xE7 },     // Alias
  { "KeyRightSuper", 0xE7 },   // Alias
  { "KeyRWin", 0xE7 },         // Short alias
  
  // Mouse functions (special function codes)
  { "MouseLeft", 0xF0 },
  { "MouseLeftButton", 0xF0 },    // Alias
  { "MouseRight", 0xF1 },
  { "MouseRightButton", 0xF1 },   // Alias
  { "MouseMiddle", 0xF2 },
  { "MouseMiddleButton", 0xF2 },  // Alias
  { "ScrollUp", 0xF3 },
  { "ScrollDown", 0xF4 },
  
  // Disabled
  { "Disabled", 0xFF },
  { "None", 0xFF },
  { "Off", 0xFF },
  
  // Sentinel (end of table)
  { NULL, 0x00 }
};

/**
  Parse key name or hex value to scan code.
  Supports both semantic names (e.g., "KeyEnter") and hex values (e.g., "0x28").
  
  @param  Value  String value from config file
  
  @retval USB HID scan code, or 0xFF if invalid
**/
STATIC
UINT8
ParseKeyValue (
  IN CHAR8  *Value
  )
{
  UINTN  i;
  
  if (Value == NULL || *Value == '\0') {
    return 0xFF;
  }
  
  // Try hex format first (0x28 or 0X28)
  if ((AsciiStrnCmp(Value, "0x", 2) == 0) || (AsciiStrnCmp(Value, "0X", 2) == 0)) {
    return (UINT8)AsciiStrHexToUintn(Value + 2);
  }
  
  // Check if it's a pure hex number (without 0x prefix)
  BOOLEAN IsHex = TRUE;
  for (i = 0; Value[i] != '\0'; i++) {
    if (!((Value[i] >= '0' && Value[i] <= '9') ||
          (Value[i] >= 'A' && Value[i] <= 'F') ||
          (Value[i] >= 'a' && Value[i] <= 'f'))) {
      IsHex = FALSE;
      break;
    }
  }
  
  if (IsHex && i > 0 && i <= 2) {
    // Pure hex number like "28"
    return (UINT8)AsciiStrHexToUintn(Value);
  }
  
  // Try semantic key name lookup (case-insensitive)
  for (i = 0; mKeyNameTable[i].Name != NULL; i++) {
    if (AsciiStriCmp(Value, mKeyNameTable[i].Name) == 0) {
      return mKeyNameTable[i].ScanCode;
    }
  }
  
  // Invalid value
  return 0xFF;
}

#endif // _XBOX360_KEY_NAMES_H_

