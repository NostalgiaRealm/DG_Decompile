/*
 * FUN_18013d980 at 18013d980
 * undefined FUN_18013d980(void)
 * Address ranges: 18013d980-18013daeb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18013d980(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  uint uVar7;
  uint uVar8;
  code *extraout_x11;
  code *extraout_x11_00;
  longlong lVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  
  if ((((*param_2 != *(int *)(param_1 + 0xe60)) || (param_2[1] != *(int *)(param_1 + 0xe64))) ||
      (param_2[2] != *(int *)(param_1 + 0xe68))) || (param_2[3] != *(int *)(param_1 + 0xe6c))) {
    FUN_180137af0(param_1,0,0,0);
    puVar6 = __hybrid_os_arm64x_dispatch_icall;
    lVar9 = *(longlong *)(param_1 + 0xf9b0);
    if ((lVar9 == 0) && (lVar9 = *(longlong *)(param_1 + 0xf9d0), lVar9 == 0)) {
      fVar10 = 1.0;
      fVar12 = 1.0;
    }
    else {
      uVar8 = *(uint *)(lVar9 + 0x24);
      (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
      uVar7 = (*extraout_x11)(lVar9,0);
      uVar5 = *(uint *)(lVar9 + 0x28);
      fVar12 = (float)uVar7 / (float)uVar8;
      (*(code *)puVar6)(0x180224000);
      uVar8 = (*extraout_x11_00)(lVar9,0);
      fVar10 = (float)uVar8 / (float)uVar5;
    }
    iVar1 = *param_2;
    iVar3 = param_2[1];
    iVar2 = param_2[2];
    iVar4 = param_2[3];
    uVar11 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 0xe68) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 0xe60) = uVar11;
    *(int *)(param_1 + 0xe70) = (int)((float)iVar1 * fVar12);
    *(int *)(param_1 + 0xe74) = (int)((float)iVar3 * fVar10);
    *(int *)(param_1 + 0xe78) = (int)((float)iVar2 * fVar12);
    *(int *)(param_1 + 0xe7c) = (int)((float)iVar4 * fVar10);
    *(undefined1 *)(param_1 + 0xf6c1) = 1;
  }
  return;
}

