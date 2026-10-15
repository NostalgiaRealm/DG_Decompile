/*
 * FUN_18003dd80 at 18003dd80
 * undefined8 __fastcall FUN_18003dd80(longlong param_1, longlong param_2, undefined8 param_3, undefined4 param_4, longlong * param_5)
 * Address ranges: 18003dd80-18003de70
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_18003dd80(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
             longlong *param_5)

{
  byte bVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 local_res8 [4];
  undefined8 local_838;
  uint auStack_830 [512];
  
  uVar2 = *(uint *)(param_1 + 8);
  uVar7 = 0;
  uVar8 = uVar7;
  if (uVar2 != 0) {
    do {
      uVar5 = (ulonglong)*(byte *)(param_1 + 0x214 + uVar8);
      bVar1 = *(byte *)(param_1 + 0x19 + uVar5 * 8);
      uVar4 = (uint)bVar1;
      uVar7 = uVar8;
      pcVar3 = FUN_180088d0c(bVar1);
      (&local_838)[uVar8 * 4] = pcVar3;
      bVar1 = *(byte *)(param_1 + 0x18 + uVar5 * 8);
      auStack_830[uVar8 * 8] = uVar4 & 0xf;
      uVar4 = (uint)*(char *)(param_1 + 0x14 + uVar5 * 8);
      auStack_830[uVar8 * 8 + 1] = *(uint *)(&DAT_180102670 + (ulonglong)bVar1 * 4);
      bVar1 = *(byte *)(param_1 + 0x17 + uVar5 * 8);
      auStack_830[uVar8 * 8 + 2] = uVar4;
      auStack_830[uVar8 * 8 + 3] = (uint)bVar1 << 2;
      if (param_2 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(uint *)(param_2 + (ulonglong)uVar4 * 4);
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
      auStack_830[uVar8 * 8 + 4] = (uint)(uVar4 != 0);
      auStack_830[uVar8 * 8 + 5] = uVar4;
      uVar8 = uVar7;
    } while (uVar6 < uVar2);
  }
  local_res8[0] = 0;
  (**(code **)(*param_5 + 0x58))(param_5,&local_838,uVar7,param_3,param_4,local_res8);
  return local_res8[0];
}

