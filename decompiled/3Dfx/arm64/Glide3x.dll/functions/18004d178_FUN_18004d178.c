/*
 * FUN_18004d178 at 18004d178
 * ulonglong __cdecl FUN_18004d178(longlong param_1, int param_2, longlong param_3, longlong param_4, longlong * param_5)
 * Address ranges: 18004d178-18004d2e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18004d178(longlong param_1,int param_2,longlong param_3,longlong param_4,
                       longlong *param_5)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  param_5[1] = 0;
  *param_5 = 0;
  param_5[3] = 0;
  param_5[2] = 0;
  uVar8 = 1;
  if (*(uint *)(param_1 + 0x34) <
      (uint)(*(int *)(*(longlong *)(param_1 + 0x18) + (ulonglong)*(uint *)(param_1 + 0x28) * 0x30 +
                     0x18) + param_2)) {
    uVar4 = *(uint *)(param_1 + 0x20);
    uVar1 = *(uint *)(param_1 + 0x28) + 1;
    if (uVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(0xf004,0x18004d1e8);
      (*pcVar6)();
    }
    uVar5 = 0;
    if (uVar4 != 0) {
      uVar5 = uVar1 / uVar4;
    }
    uVar1 = uVar1 - uVar5 * uVar4;
    lVar2 = *(longlong *)(param_1 + 0x18) + (ulonglong)uVar1 * 0x30;
    uVar7 = (**(code **)(**(longlong **)(lVar2 + 0x20) + 0x40))();
    if (uVar7 < *(ulonglong *)(lVar2 + 0x28)) {
      uVar7 = FUN_18004ce88(param_1);
      uVar8 = uVar7 & 0xff;
      if ((uVar7 & 0xff) == 0) {
        FUN_1800635c0();
        DebugBreak();
        return uVar8;
      }
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    }
    else {
      *(uint *)(param_1 + 0x28) = uVar1;
      *(undefined4 *)(*(longlong *)(param_1 + 0x18) + (ulonglong)uVar1 * 0x30 + 0x18) = 0;
    }
  }
  plVar3 = (longlong *)(*(longlong *)(param_1 + 0x18) + (ulonglong)*(uint *)(param_1 + 0x28) * 0x30)
  ;
  *param_5 = *plVar3 + (ulonglong)(uint)((int)plVar3[3] * *(int *)(param_1 + 0x38));
  param_5[1] = plVar3[1] + (ulonglong)(uint)((int)plVar3[3] * *(int *)(param_1 + 0x38));
  param_5[2] = plVar3[2];
  *(undefined4 *)(param_5 + 3) = *(undefined4 *)(param_1 + 0x38);
  plVar3[4] = param_3;
  plVar3[5] = param_4;
  *(int *)(plVar3 + 3) = (int)plVar3[3] + param_2;
  return uVar8;
}

