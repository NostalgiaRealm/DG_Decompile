/*
 * FUN_1800bbc8c at 1800bbc8c
 * int __fastcall FUN_1800bbc8c(longlong param_1, uint param_2, uint param_3, int param_4, uint param_5, undefined8 * param_6, longlong param_7)
 * Address ranges: 1800bbc8c-1800bc01e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800bbc8c(longlong param_1,uint param_2,uint param_3,int param_4,uint param_5,
                 undefined8 *param_6,longlong param_7)

{
  undefined1 auVar1 [16];
  bool bVar2;
  BOOL BVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  uint local_res8;
  
  if (((*(byte *)(param_1 + -0x59c0) & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
    bVar2 = false;
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 1;
  }
  else {
    bVar2 = true;
    BVar3 = TryEnterCriticalSection(DAT_1801123a8);
    if (BVar3 == 0) {
      FUN_1800044dc(0);
    }
  }
  local_res8 = 0;
  iVar4 = FUN_180002a0c(*(longlong *)(param_1 + -0x5a10),*(uint *)(param_1 + -0x5990),
                        *(int *)(param_1 + -0x59d0),*(int *)(param_1 + -0x59b0),param_5,param_3,7,
                        param_4,0);
  uVar13 = 0x10;
  iVar6 = -0x7789f794;
  if (((-1 < iVar4) && (iVar12 = -0x7789f794, iVar4 = iVar6, param_2 != 0)) &&
     (iVar4 = iVar12, param_6 != (undefined8 *)0x0)) {
    uVar5 = 2;
    if (param_4 == 0x66) {
      uVar5 = 4;
    }
    if ((uVar5 <= param_2) &&
       (((param_3 & 0x10) == 0 || ((*(byte *)(param_1 + -0x59c0) & 0x40) == 0)))) {
      *param_6 = 0;
      local_res8 = 0;
      iVar4 = 0;
      if ((param_5 == 0) &&
         ((iVar4 = 0, *(int *)(param_1 + -0x59d0) == 1 &&
          (iVar4 = 0, local_res8 = param_2,
          *(ulonglong *)(&DAT_180112b00 + (ulonglong)*(uint *)(param_1 + -0x5990) * 600) <
          (ulonglong)param_2)))) {
        iVar4 = -0x7789fe84;
      }
    }
  }
  if ((param_7 != 0) || (iVar6 = iVar4, iVar4 < 0)) goto LAB_1800bbfe6;
  uVar8 = *(undefined8 *)(param_1 + -0x5998);
  iVar6 = -0x7ff8fff2;
  puVar7 = (undefined8 *)FUN_1800fbccc(0x90);
  if (puVar7 == (undefined8 *)0x0) goto LAB_1800bbfe6;
  puVar7[0x10] = 0;
  puVar7[0x11] = puVar7 + 0xf;
  puVar7[6] = 0;
  puVar7[7] = 0;
  lVar11 = param_1;
  if (param_1 == 0x6838) {
    lVar11 = 0;
  }
  puVar7[8] = lVar11;
  *(undefined4 *)(puVar7 + 9) = 7;
  puVar7[1] = 0;
  puVar7[2] = 0;
  puVar7[3] = 0;
  *(uint *)(puVar7 + 4) = param_2;
  *(undefined4 *)((longlong)puVar7 + 0x24) = 0;
  *(uint *)(puVar7 + 5) = param_2;
  *(undefined4 *)((longlong)puVar7 + 0x2c) = 0;
  *(uint *)(puVar7 + 10) = param_3;
  *(int *)((longlong)puVar7 + 0x54) = param_4;
  *(uint *)(puVar7 + 0xb) = param_5;
  puVar7[0xd] = uVar8;
  *puVar7 = &PTR_FUN_180104878;
  puVar7[0xc] = 0;
  *(undefined4 *)(puVar7 + 0xe) = 0;
  puVar7[0xf] = &PTR_FUN_180104808;
  uVar8 = FUN_1800141f4((longlong)puVar7);
  if ((char)uVar8 != '\0') {
    iVar4 = *(int *)(param_1 + -0x591c);
    if (*(int *)(param_1 + -0x5920) == iVar4) {
      if (iVar4 != 0) {
        uVar13 = (ulonglong)(uint)(iVar4 * 2);
      }
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar13;
      uVar8 = SUB168(ZEXT816(8) * auVar1,0);
      if (SUB168(ZEXT816(8) * auVar1,8) != 0) {
        uVar8 = 0xffffffffffffffff;
      }
      puVar9 = (undefined8 *)thunk_FUN_1800fbccc(uVar8);
      uVar8 = 0;
      if (puVar9 != (undefined8 *)0x0) {
        FUN_1800fbec0(puVar9,*(undefined8 **)(param_1 + -0x5928),
                      (ulonglong)*(uint *)(param_1 + -0x591c) << 3);
        FUN_1800fbcf0(*(LPVOID *)(param_1 + -0x5928));
        *(undefined8 **)(param_1 + -0x5928) = puVar9;
        *(int *)(param_1 + -0x591c) = (int)uVar13;
        goto LAB_1800bbf1b;
      }
    }
    else {
LAB_1800bbf1b:
      *(undefined8 **)
       (*(longlong *)(param_1 + -0x5928) + (ulonglong)*(uint *)(param_1 + -0x5920) * 8) = puVar7;
      *(int *)(param_1 + -0x5920) = *(int *)(param_1 + -0x5920) + 1;
      uVar10 = FUN_1800c0034((longlong)(puVar7 + 0xf),(longlong *)&DAT_1800fd6b0,param_6);
      uVar8 = 0;
      iVar6 = (int)uVar10;
      if (-1 < iVar6) {
        *(ulonglong *)(&DAT_180112b00 + (ulonglong)*(uint *)(param_1 + -0x5990) * 600) =
             *(longlong *)(&DAT_180112b00 + (ulonglong)*(uint *)(param_1 + -0x5990) * 600) -
             (ulonglong)local_res8;
        goto LAB_1800bbfe6;
      }
      FUN_180007e90(param_1 + -0x6838,(longlong)puVar7);
    }
    puVar9 = (undefined8 *)puVar7[0xc];
    if (puVar9 != (undefined8 *)0x0) {
      (**(code **)*puVar9)(puVar9,1);
      uVar8 = 0;
    }
    puVar7[0xc] = uVar8;
    if (puVar7[1] != 0) {
      FUN_1800fbdd4(*(LPVOID *)(puVar7[1] + -8));
      uVar8 = 0;
    }
    puVar7[1] = uVar8;
  }
  puVar7[0xf] = &PTR_FUN_180104808;
  *puVar7 = &PTR_LAB_180101660;
  FUN_180014804(puVar7 + 6);
  FUN_1800fbcf0(puVar7);
LAB_1800bbfe6:
  if (bVar2) {
    LeaveCriticalSection(DAT_1801123a8);
  }
  else {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
  }
  return iVar6;
}

