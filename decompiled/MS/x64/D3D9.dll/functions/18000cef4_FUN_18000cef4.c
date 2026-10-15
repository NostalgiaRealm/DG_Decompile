/*
 * FUN_18000cef4 at 18000cef4
 * undefined8 __fastcall FUN_18000cef4(longlong param_1, undefined8 param_2, short param_3, char param_4)
 * Address ranges: 18000cef4-18000cf7f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18000cef4(longlong param_1,undefined8 param_2,short param_3,char param_4)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 local_res10;
  undefined4 local_res20 [2];
  
  uVar4 = 0xffffffff;
  uVar6 = 0;
  local_res10 = CONCAT35((int3)((ulonglong)param_2 >> 0x28),0x100000000);
  do {
    local_res20[0] = *(undefined4 *)(param_1 + 0xc);
    bVar1 = (&DAT_180100f68)[uVar6];
    uVar3 = (uint)bVar1;
    uVar5 = (uint)bVar1;
    if (((*(byte *)((longlong)local_res20 + ((longlong)(int)(uint)bVar1 >> 3)) >> (bVar1 & 7) & 1)
         == 0) &&
       (local_res20[0] = *(undefined4 *)(param_1 + 0x10),
       (*(byte *)((longlong)local_res20 + ((longlong)(int)uVar5 >> 3)) >> (uVar5 & 7) & 1) == 0)) {
      if (*(int *)(param_1 + 0x58 + (ulonglong)bVar1 * 4) == -1) goto LAB_18000cf4e;
      uVar4 = (ulonglong)uVar5;
    }
    uVar5 = (int)uVar6 + 1;
    uVar6 = (ulonglong)uVar5;
  } while (uVar5 < 0x10);
  uVar3 = 0xffffffff;
LAB_18000cf4e:
  if (uVar3 != 0xffffffff) {
    uVar4 = (ulonglong)uVar3;
  }
  uVar5 = (uint)uVar4;
  local_res10 = CONCAT44(local_res10._4_4_,uVar5);
  *(int *)(param_1 + 0x58 + uVar4 * 4) = (int)param_3;
  if (param_4 != '\0') {
    pbVar2 = (byte *)(param_1 + 0x10 + ((longlong)(int)uVar5 >> 3));
    *pbVar2 = *pbVar2 | '\x01' << (uVar5 & 7);
  }
  pbVar2 = (byte *)(param_1 + 0x98 + ((longlong)(int)uVar5 >> 3));
  *pbVar2 = *pbVar2 | '\x01' << (uVar5 & 7);
  return local_res10;
}

