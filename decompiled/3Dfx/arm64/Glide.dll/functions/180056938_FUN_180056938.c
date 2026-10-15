/*
 * FUN_180056938 at 180056938
 * undefined8 __cdecl FUN_180056938(longlong * param_1, ulonglong * param_2)
 * Address ranges: 180056938-180056a13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180056938(longlong *param_1,ulonglong *param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  int local_3c;
  int iStack_38;
  
  uVar7 = 0;
  local_3c = (int)(param_2[2] >> 0x20);
  iStack_38 = (int)param_2[3];
  uStack_48 = (uint)param_2[1];
  uStack_44 = (uint)(param_2[1] >> 0x20);
  uStack_4c = (uint)(*param_2 >> 0x20);
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  uVar3 = ((ulonglong)
           (uStack_4c |
           (uStack_48 | (uStack_44 | (local_3c - 1U | (iStack_38 + -1) * 0x10) << 3) << 3) << 3) &
          0xffffff) << 8 | *param_2 & 0xffffffff;
  if (uVar1 != 0) {
    uVar5 = 0;
    uVar4 = uVar1;
    do {
      uVar2 = uVar4 + uVar5 >> 1;
      uVar7 = (ulonglong)uVar2;
      uVar6 = *(ulonglong *)(*param_1 + uVar7 * 0x48);
      if (uVar6 <= uVar3) {
        if (uVar3 <= uVar6) break;
        uVar5 = uVar2 + 1;
        uVar7 = (ulonglong)(uVar2 + 1);
        uVar2 = uVar4;
      }
      uVar4 = uVar2;
    } while (uVar4 != uVar5);
    if (((uint)uVar7 != uVar1) && (*(ulonglong *)(*param_1 + uVar7 * 0x48) == uVar3))
    goto LAB_1800569f8;
  }
  FUN_180056a18(param_1,(uint)uVar7,uVar3,param_2);
LAB_1800569f8:
  return *(undefined8 *)(*param_1 + uVar7 * 0x48 + 0x40);
}

