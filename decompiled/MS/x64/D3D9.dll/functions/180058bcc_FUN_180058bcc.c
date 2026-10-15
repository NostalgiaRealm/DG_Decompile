/*
 * FUN_180058bcc at 180058bcc
 * longlong __fastcall FUN_180058bcc(undefined8 * param_1, ulonglong param_2)
 * Address ranges: 180058bcc-180058c79
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_180058bcc(undefined8 *param_1,ulonglong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar6;
  uint uVar7;
  ulonglong local_res10 [3];
  undefined8 local_68 [12];
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1[3] + 0x10);
  if (uVar1 != 0) {
    lVar3 = *(longlong *)(param_1[3] + 8);
    uVar7 = 0;
    uVar6 = uVar1;
    do {
      uVar4 = uVar6 + uVar7 >> 1;
      uVar5 = (ulonglong)uVar4;
      uVar2 = *(ulonglong *)(lVar3 + uVar5 * 0x70);
      if (uVar2 <= param_2) {
        if (param_2 <= uVar2) break;
        uVar7 = uVar4 + 1;
        uVar5 = (ulonglong)uVar7;
        uVar4 = uVar6;
      }
      uVar6 = uVar4;
    } while (uVar6 != uVar7);
    if (((uint)uVar5 != uVar1) && (*(ulonglong *)(uVar5 * 0x70 + lVar3) == param_2)) {
      lVar3 = lVar3 + 0x10 + uVar5 * 0x70;
      goto LAB_180058c3a;
    }
  }
  lVar3 = 0;
LAB_180058c3a:
  if (lVar3 == 0) {
    local_res10[0] = param_2;
    (**(code **)*param_1)(param_1,local_68,param_2);
    lVar3 = FUN_180058c7c((longlong *)param_1[3],local_res10,local_68);
    lVar3 = lVar3 + 8;
  }
  return lVar3;
}

