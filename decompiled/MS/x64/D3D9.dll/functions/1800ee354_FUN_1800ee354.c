/*
 * FUN_1800ee354 at 1800ee354
 * undefined __fastcall FUN_1800ee354(int param_1, longlong * param_2)
 * Address ranges: 1800ee354-1800ee429
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800ee354(int param_1,longlong *param_2)

{
  byte in_stack_00000030;
  
  if (((param_1 != 0x40) && (param_1 != 0x41)) && (param_1 != 0x50)) {
    if (param_1 != 0x51) {
      if ((param_1 == 0x10040) || (param_1 == 0x10050)) goto LAB_1800ee3e9;
      if (param_1 != 0x10051) {
        if (param_1 == 0x20050) goto LAB_1800ee3e9;
        if (param_1 != 0x20051) {
          return;
        }
      }
    }
    FUN_1800eddec(param_2,7,(ulonglong)((uint)in_stack_00000030 << 0xb | 0x7000059),0x308e46);
    return;
  }
LAB_1800ee3e9:
  FUN_1800eddec(param_2,4,(ulonglong)((uint)in_stack_00000030 << 0xb | 0x4000059),0x208e46);
  return;
}

