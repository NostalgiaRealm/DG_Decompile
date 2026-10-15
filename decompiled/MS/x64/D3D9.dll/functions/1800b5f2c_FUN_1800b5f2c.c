/*
 * FUN_1800b5f2c at 1800b5f2c
 * undefined __fastcall FUN_1800b5f2c(longlong param_1, float param_2)
 * Address ranges: 1800b5f2c-1800b5f85
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800b5f2c(longlong param_1,float param_2)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(&DAT_00006898 + param_1);
  *(float *)(param_1 + 0xc4e0) = param_2;
  if ((*(uint *)(lVar2 + 0x1c) & 0x1000000) != 0) {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x18) + 0x9eb);
    if (uVar1 < 9) {
      if (uVar1 != 0) {
        param_2 = (float)uVar1;
      }
    }
    else {
      param_2 = 8.0;
    }
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x138))
              (*(longlong **)(param_1 + 0x28),param_2,uVar1 != 0);
  }
  return;
}

