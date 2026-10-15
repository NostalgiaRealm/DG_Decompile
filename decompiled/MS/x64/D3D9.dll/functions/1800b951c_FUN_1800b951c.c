/*
 * FUN_1800b951c at 1800b951c
 * int __fastcall FUN_1800b951c(longlong param_1, uint param_2, uint param_3, int param_4, uint param_5, uint param_6, uint param_7, uint param_8, byte param_9, undefined8 * param_10)
 * Address ranges: 1800b951c-1800b98a4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800b951c(longlong param_1,uint param_2,uint param_3,int param_4,uint param_5,uint param_6,
                 uint param_7,uint param_8,byte param_9,undefined8 *param_10)

{
  undefined1 auVar1 [16];
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  undefined1 uVar16;
  undefined8 in_stack_ffffffffffffff48;
  int local_68 [3];
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  
  if (param_2 == 0) {
    return -0x7789f794;
  }
  if (param_3 == 0) {
    return -0x7789f794;
  }
  iVar4 = *(int *)(param_1 + 0xe68);
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
  bVar2 = FUN_1800038e8(*(longlong *)(param_1 + 0xe28),iVar4,1,param_2,param_3,1);
  if (!bVar2) {
    return -0x7789f794;
  }
  if ((param_5 != 0) && (param_7 != 0 || param_9 != 0)) {
    return -0x7789f794;
  }
  uVar9 = CONCAT44(uVar7,param_7);
  iVar4 = FUN_180002a0c(*(longlong *)(param_1 + 0xe28),*(uint *)(param_1 + 0xea8),iVar4,
                        *(int *)(param_1 + 0xe88),param_7,param_8,1,param_4,0);
  if (iVar4 < 0) {
LAB_1800b96a9:
    uVar8 = 0;
  }
  else {
    if (param_5 != 0) {
      uVar8 = FUN_180003094(*(longlong *)(param_1 + 0xe28),*(uint *)(param_1 + 0xea8),
                            *(int *)(param_1 + 0xe68),param_4,uVar9,param_5,param_6,0);
      iVar4 = (int)uVar8;
    }
    if (iVar4 < 0) goto LAB_1800b96a9;
    uVar8 = 0;
    if ((param_7 == 0) && (*(int *)(param_1 + 0xe68) == 1)) {
      iVar5 = param_4;
      uVar9 = FUN_1800028a0(param_4);
      uVar15 = (uint)uVar9;
      uVar9 = FUN_180002844(iVar5);
      uVar6 = (uint)uVar9;
      uVar9 = FUN_1800026c0(iVar5);
      iVar13 = (int)uVar9;
      iVar5 = FUN_180002500(param_4);
      uVar6 = FUN_180031910(param_2,param_3,1,iVar5,iVar13,uVar6,uVar15);
      uVar8 = (ulonglong)uVar6;
      if (*(ulonglong *)(&DAT_180112b00 + (ulonglong)*(uint *)(param_1 + 0xea8) * 600) < uVar8) {
        return -0x7789fe84;
      }
    }
  }
  if (iVar4 < 0) {
    return iVar4;
  }
  uVar16 = param_4 == 0x14;
  local_68[2] = param_8;
  local_54 = param_6;
  iVar4 = -0x7ff8fff2;
  local_68[1] = 1;
  local_5c = param_7;
  local_58 = param_5;
  local_68[0] = param_4;
  local_50 = param_2;
  local_4c = param_3;
  uVar7 = FUN_18000223c(param_4);
  uVar14 = 0;
  uVar12 = 0;
  puVar10 = (undefined8 *)
            FUN_1800acdf0(param_1,0,0,0,(undefined8 *)local_68,0,0,uVar7,param_9,0,uVar16,
                          *(undefined8 *)(param_1 + 0xe98),0,0);
  if (puVar10 == (undefined8 *)0x0) {
    return -0x7ff8fff2;
  }
  if ((puVar10[1] == 0) ||
     (cVar3 = FUN_1800148d4((longlong)puVar10,(ulonglong *)0x0,uVar12,uVar14), cVar3 == '\0'))
  goto LAB_1800b987a;
  *(int *)(puVar10[1] + 0x104) = *(int *)(puVar10[1] + 0x104) + 1;
  iVar5 = *(int *)(param_1 + 0xefc);
  if (*(int *)(param_1 + 0xef8) == iVar5) {
    uVar12 = 0x10;
    if (iVar5 != 0) {
      uVar12 = (ulonglong)(uint)(iVar5 * 2);
    }
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar12;
    uVar9 = SUB168(ZEXT816(8) * auVar1,0);
    if (SUB168(ZEXT816(8) * auVar1,8) != 0) {
      uVar9 = 0xffffffffffffffff;
    }
    puVar11 = (undefined8 *)thunk_FUN_1800fbccc(uVar9);
    if (puVar11 != (undefined8 *)0x0) {
      FUN_1800fbec0(puVar11,*(undefined8 **)(param_1 + 0xef0),
                    (ulonglong)*(uint *)(param_1 + 0xefc) << 3);
      FUN_1800fbcf0(*(LPVOID *)(param_1 + 0xef0));
      *(undefined8 **)(param_1 + 0xef0) = puVar11;
      *(int *)(param_1 + 0xefc) = (int)uVar12;
      goto LAB_1800b980e;
    }
  }
  else {
LAB_1800b980e:
    *(undefined8 **)(*(longlong *)(param_1 + 0xef0) + (ulonglong)*(uint *)(param_1 + 0xef8) * 8) =
         puVar10;
    *(int *)(param_1 + 0xef8) = *(int *)(param_1 + 0xef8) + 1;
    uVar9 = FUN_1800c1048((longlong)(puVar10 + 0x10),(longlong *)&DAT_1800fd6c0,param_10);
    iVar4 = (int)uVar9;
    if (-1 < iVar4) {
      *(ulonglong *)(&DAT_180112b00 + (ulonglong)*(uint *)(param_1 + 0xea8) * 600) =
           *(longlong *)(&DAT_180112b00 + (ulonglong)*(uint *)(param_1 + 0xea8) * 600) - uVar8;
      return iVar4;
    }
    FUN_180007d00(param_1,(longlong)puVar10);
  }
  FUN_180014d3c((longlong)puVar10);
LAB_1800b987a:
  FUN_1800c0fbc(puVar10);
  FUN_1800fbcf0(puVar10);
  return iVar4;
}

