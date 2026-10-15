/*
 * FUN_1800bee10 at 1800bee10
 * undefined FUN_1800bee10(void)
 * Address ranges: 1800bee10-1800bef27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800bee10(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  char *pcVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined1 auStack_20 [16];
  
  uVar7 = 0x8876086c;
  if (param_2 != (undefined4 *)0x0) {
    thunk_FUN_180001218(param_2,*(undefined8 *)(param_1 + 0x60),0x130);
    lVar8 = *(longlong *)(param_1 + 0x50);
    lVar3 = (ulonglong)*(uint *)(param_1 + -0x59d4) * 0x10;
    param_2[1] = *(uint *)(param_1 + -0x59d4);
    param_2[0x38] = *(undefined4 *)(*(longlong *)(lVar8 + 0x78) + lVar3);
    lVar1 = lVar3 + *(longlong *)(lVar8 + 0x78);
    if (*(int *)(lVar1 + 4) == 0) {
      uVar7 = *(undefined4 *)(lVar1 + 8);
    }
    else {
      uVar7 = 0;
    }
    param_2[0x3a] = uVar7;
    param_2[0x39] = *(undefined4 *)(lVar3 + *(longlong *)(lVar8 + 0x78) + 4);
    *param_2 = *(undefined4 *)(param_1 + -0x59d0);
    param_2[0x32] = *(undefined4 *)(param_1 + -0x59bc);
    plVar5 = (longlong *)(&DAT_180253860)[(ulonglong)*(uint *)(param_1 + -0x5990) * 0x4b];
    if (plVar5 == (longlong *)0x0) {
      iVar4 = (**(code **)(*DAT_18024de58 + 0x50))
                        (DAT_18024de58,
                         (&DAT_18025386c)[(ulonglong)*(uint *)(param_1 + -0x5990) * 0x96]);
      cVar2 = 2 < iVar4;
    }
    else {
      pcVar6 = (char *)(**(code **)(*plVar5 + 0x18))(plVar5,auStack_20);
      cVar2 = *pcVar6;
    }
    if (cVar2 == '\0') {
      param_2[7] = param_2[7] & 0xfeffffff;
      param_2[0x35] = param_2[0x35] & 0xfffffff7;
      param_2[0x36] = 0;
    }
    uVar7 = 0;
  }
  return uVar7;
}

