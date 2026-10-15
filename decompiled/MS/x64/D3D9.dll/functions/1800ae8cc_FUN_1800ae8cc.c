/*
 * FUN_1800ae8cc at 1800ae8cc
 * uint __fastcall FUN_1800ae8cc(longlong param_1, uint param_2, int param_3, int * param_4)
 * Address ranges: 1800ae8cc-1800aeaae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1800ae8cc(longlong param_1,uint param_2,int param_3,int *param_4)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int *piVar8;
  char *pcVar9;
  char cVar10;
  int *piVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined1 local_res10 [8];
  
  uVar13 = (ulonglong)param_2;
  uVar14 = 0x8876086c;
  if ((param_2 < *(uint *)(param_1 + -0x30)) && (param_3 - 1U < 4)) {
    uVar5 = FUN_1800028ec(param_1 + -0xa0,param_3);
    uVar14 = ~-(uint)((char)uVar5 != '\0') & 0x8876086b;
    if ((char)uVar5 != '\0') {
      if (param_3 == 2) {
        puVar6 = (undefined8 *)&DAT_18010e150;
      }
      else {
        puVar6 = (undefined8 *)(&DAT_18010e300 + (ulonglong)*(uint *)(param_1 + -0x90) * 0x1b0);
      }
      lVar12 = 2;
      piVar8 = param_4;
      do {
        piVar11 = piVar8;
        puVar7 = puVar6;
        uVar5 = puVar7[1];
        *(undefined8 *)piVar11 = *puVar7;
        *(undefined8 *)(piVar11 + 2) = uVar5;
        uVar5 = puVar7[3];
        *(undefined8 *)(piVar11 + 4) = puVar7[2];
        *(undefined8 *)(piVar11 + 6) = uVar5;
        uVar5 = puVar7[5];
        *(undefined8 *)(piVar11 + 8) = puVar7[4];
        *(undefined8 *)(piVar11 + 10) = uVar5;
        uVar5 = puVar7[7];
        *(undefined8 *)(piVar11 + 0xc) = puVar7[6];
        *(undefined8 *)(piVar11 + 0xe) = uVar5;
        uVar5 = puVar7[9];
        *(undefined8 *)(piVar11 + 0x10) = puVar7[8];
        *(undefined8 *)(piVar11 + 0x12) = uVar5;
        uVar5 = puVar7[0xb];
        *(undefined8 *)(piVar11 + 0x14) = puVar7[10];
        *(undefined8 *)(piVar11 + 0x16) = uVar5;
        uVar5 = puVar7[0xd];
        *(undefined8 *)(piVar11 + 0x18) = puVar7[0xc];
        *(undefined8 *)(piVar11 + 0x1a) = uVar5;
        uVar5 = puVar7[0xf];
        *(undefined8 *)(piVar11 + 0x1c) = puVar7[0xe];
        *(undefined8 *)(piVar11 + 0x1e) = uVar5;
        lVar12 = lVar12 + -1;
        puVar6 = puVar7 + 0x10;
        piVar8 = piVar11 + 0x20;
      } while (lVar12 != 0);
      uVar5 = puVar7[0x11];
      *(undefined8 *)(piVar11 + 0x20) = puVar7[0x10];
      *(undefined8 *)(piVar11 + 0x22) = uVar5;
      iVar4 = *(int *)((longlong)puVar7 + 0x94);
      iVar2 = *(int *)(puVar7 + 0x13);
      iVar3 = *(int *)((longlong)puVar7 + 0x9c);
      piVar11[0x24] = *(int *)(puVar7 + 0x12);
      piVar11[0x25] = iVar4;
      piVar11[0x26] = iVar2;
      piVar11[0x27] = iVar3;
      iVar4 = *(int *)((longlong)puVar7 + 0xa4);
      iVar2 = *(int *)(puVar7 + 0x15);
      iVar3 = *(int *)((longlong)puVar7 + 0xac);
      piVar11[0x28] = *(int *)(puVar7 + 0x14);
      piVar11[0x29] = iVar4;
      piVar11[0x2a] = iVar2;
      piVar11[0x2b] = iVar3;
      param_4[1] = param_2;
      param_4[0x38] = *(int *)(*(longlong *)(param_1 + -0x28) + uVar13 * 0x10);
      if (*(int *)(*(longlong *)(param_1 + -0x28) + 4 + uVar13 * 0x10) == 0) {
        iVar4 = *(int *)(*(longlong *)(param_1 + -0x28) + 8 + uVar13 * 0x10);
      }
      else {
        iVar4 = 0;
      }
      param_4[0x3a] = iVar4;
      param_4[0x39] = *(int *)(*(longlong *)(param_1 + -0x28) + 4 + uVar13 * 0x10);
      *param_4 = param_3;
      if (param_3 == 2) {
        piVar8 = &DAT_18010e218;
      }
      else {
        piVar8 = (int *)(&DAT_18010e3c8 + (ulonglong)*(uint *)(param_1 + -0x90) * 0x1b0);
      }
      if (*(uint *)(param_1 + -0x90) < 2) {
        iVar4 = *(int *)(DAT_180111f20 + 0x9e7);
      }
      else {
        iVar4 = *piVar8;
      }
      param_4[0x32] = iVar4;
      plVar1 = *(longlong **)(&DAT_1801128f0 + uVar13 * 600);
      if (plVar1 == (longlong *)0x0) {
        iVar4 = (**(code **)(*DAT_180111f18 + 0x50))(DAT_180111f18,(&DAT_1801128fc)[uVar13 * 0x96]);
        cVar10 = 2 < iVar4;
      }
      else {
        pcVar9 = (char *)(**(code **)(*plVar1 + 0x18))(plVar1,local_res10);
        cVar10 = *pcVar9;
      }
      if (cVar10 == '\0') {
        param_4[7] = param_4[7] & 0xfeffffff;
        param_4[0x35] = param_4[0x35] & 0xfffffff7;
        param_4[0x36] = 0;
      }
    }
  }
  return uVar14;
}

