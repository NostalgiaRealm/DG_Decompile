/*
 * FUN_18007b0b4 at 18007b0b4
 * undefined __fastcall FUN_18007b0b4(undefined8 param_1, longlong param_2)
 * Address ranges: 18007b0b4-18007b133
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18007b0b4(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  byte bVar3;
  
  if (*(char *)(*(longlong *)(param_2 + 0x10) + 0x48b3) == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1800ec8c0(param_2 + 0x20,4,'\x01');
  }
  *(uint *)(param_2 + 0x2c4) = uVar1;
  bVar3 = 0;
  do {
    if (bVar3 < *(byte *)(*(longlong *)(param_2 + 0x10) + 0x4886)) {
      uVar1 = FUN_1800ec8c0(param_2 + 0x20,4,'\x01');
    }
    else {
      uVar1 = 0;
    }
    uVar2 = (ulonglong)bVar3;
    bVar3 = bVar3 + 1;
    *(uint *)(param_2 + 0x2b4 + uVar2 * 4) = uVar1;
  } while (bVar3 < 4);
  return;
}

