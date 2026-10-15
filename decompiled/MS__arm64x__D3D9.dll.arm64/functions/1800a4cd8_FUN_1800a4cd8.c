/*
 * FUN_1800a4cd8 at 1800a4cd8
 * undefined FUN_1800a4cd8(void)
 * Address ranges: 1800a4cd8-1800a4e83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800a4cd8(longlong param_1,uint param_2,int param_3,int *param_4)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  char *pcVar6;
  undefined *puVar7;
  int *piVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  undefined1 auStack_50 [16];
  
  uVar10 = (ulonglong)param_2;
  uVar9 = 0x8876086c;
  if ((param_2 < *(uint *)(param_1 + -0x30)) && (param_3 - 1U < 4)) {
    cVar3 = FUN_180002178(param_1 + -0xa0,param_3);
    uVar9 = 0x8876086b;
    if (cVar3 != '\0') {
      puVar7 = &DAT_180248b80;
      if (param_3 != 2) {
        puVar7 = &DAT_180248d30 + (ulonglong)*(uint *)(param_1 + -0x90) * 0x1b0;
      }
      thunk_FUN_180001218(param_4,puVar7,0x130);
      param_4[1] = param_2;
      lVar2 = uVar10 * 0x10;
      param_4[0x38] = *(int *)(*(longlong *)(param_1 + -0x28) + lVar2);
      lVar1 = lVar2 + *(longlong *)(param_1 + -0x28);
      if (*(int *)(lVar1 + 4) == 0) {
        iVar4 = *(int *)(lVar1 + 8);
      }
      else {
        iVar4 = 0;
      }
      param_4[0x3a] = iVar4;
      iVar4 = *(int *)(lVar2 + *(longlong *)(param_1 + -0x28) + 4);
      *param_4 = param_3;
      param_4[0x39] = iVar4;
      if (param_3 == 2) {
        piVar8 = &DAT_180248c48;
      }
      else {
        piVar8 = (int *)((ulonglong)*(uint *)(param_1 + -0x90) * 0x1b0 + 0x180248df8);
      }
      if (*(uint *)(param_1 + -0x90) < 2) {
        iVar4 = *(int *)(DAT_18024de60 + 0x9e7);
      }
      else {
        iVar4 = *piVar8;
      }
      param_4[0x32] = iVar4;
      plVar5 = (longlong *)(&DAT_180253860)[uVar10 * 0x4b];
      if (plVar5 == (longlong *)0x0) {
        iVar4 = (**(code **)(*DAT_18024de58 + 0x50))(DAT_18024de58,(&DAT_18025386c)[uVar10 * 0x96]);
        cVar3 = 2 < iVar4;
      }
      else {
        pcVar6 = (char *)(**(code **)(*plVar5 + 0x18))(plVar5,auStack_50);
        cVar3 = *pcVar6;
      }
      uVar9 = 0;
      if (cVar3 == '\0') {
        param_4[7] = param_4[7] & 0xfeffffff;
        param_4[0x35] = param_4[0x35] & 0xfffffff7;
        param_4[0x36] = 0;
      }
    }
  }
  return uVar9;
}

