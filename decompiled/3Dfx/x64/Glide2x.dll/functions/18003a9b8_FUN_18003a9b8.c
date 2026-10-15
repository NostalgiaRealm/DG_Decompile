/*
 * FUN_18003a9b8 at 18003a9b8
 * undefined __fastcall FUN_18003a9b8(longlong param_1, undefined8 param_2, uint param_3, undefined8 param_4)
 * Address ranges: 18003a9b8-18003aa6c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003a9b8(longlong param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if ((param_3 & 0xf0) == 0x80) {
    *(undefined4 *)(param_1 + 0x15c) = 2;
    uVar3 = (ulonglong)(param_3 & 0xf);
    uVar2 = FUN_180054c5c(*(uint *)(param_1 + 0x98 + (ulonglong)(param_3 & 0xf) * 4),
                          (uint)(byte)param_4,1,param_4,0,0);
    *(uint *)(param_1 + 0x160) = uVar2;
    uVar2 = (uint)*(byte *)(param_1 + 0x98 + uVar3 * 4);
  }
  else {
    if ((param_3 & 0xf0) != 0xf0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x15c) = 2;
    uVar2 = *(uint *)(param_1 + 0xa8);
    uVar1 = FUN_180054c5c(uVar2,(uint)(byte)param_4,1,param_4,0,0);
    *(uint *)(param_1 + 0x160) = uVar1;
    uVar2 = uVar2 & 0xff;
  }
  *(uint *)(param_1 + 0x164) = uVar2;
  return;
}

