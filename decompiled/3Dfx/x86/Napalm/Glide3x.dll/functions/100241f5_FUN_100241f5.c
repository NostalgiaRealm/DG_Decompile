/*
 * FUN_100241f5 at 100241f5
 * float10 __fastcall FUN_100241f5(uint param_1)
 * Address ranges: 100241f5-10024295
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float10 __fastcall FUN_100241f5(uint param_1)

{
  uint uVar1;
  float local_8;
  
  uVar1 = param_1 & 0xf00;
  local_8 = 0.0;
  if ((param_1 & 0xf0) == 0) {
    if (uVar1 == 0x100) {
      local_8 = 1.0;
    }
    else {
      local_8 = 0.0;
      if (uVar1 == 0x300) {
        local_8 = -0.5;
      }
    }
  }
  else {
    if (uVar1 == 0x100) {
      local_8 = 1.0;
    }
    else if (uVar1 == 0x300) {
      local_8 = -0.5;
    }
    else if (uVar1 == 0x400) {
      local_8 = -1.0;
    }
    else if (uVar1 == 0x500) {
      local_8 = 0.5;
    }
    if ((param_1 & 0x2000) != 0) {
      local_8 = local_8 * 255.0;
    }
  }
  return (float10)local_8;
}

