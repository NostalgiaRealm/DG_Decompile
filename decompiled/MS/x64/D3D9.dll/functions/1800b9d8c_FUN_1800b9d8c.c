/*
 * FUN_1800b9d8c at 1800b9d8c
 * int __fastcall FUN_1800b9d8c(longlong param_1, undefined8 * param_2, longlong param_3, uint param_4, char param_5, undefined1 param_6, char param_7, undefined8 * param_8, undefined8 * param_9)
 * Address ranges: 1800b9d8c-1800ba0df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800b9d8c(longlong param_1,undefined8 *param_2,longlong param_3,uint param_4,char param_5,
                 undefined1 param_6,char param_7,undefined8 *param_8,undefined8 *param_9)

{
  uint uVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  char cVar4;
  int iVar5;
  uint *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  bool bVar12;
  undefined8 local_res18;
  uint local_res20;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  
  iVar5 = -0x7ff8fff2;
  puVar10 = (undefined8 *)(-(ulonglong)(param_3 != 0) & param_3 - 8U);
  local_res20 = param_4;
  if (puVar10 == (undefined8 *)0x0) {
    cVar4 = *(char *)(param_1 + 0x6894);
    plVar2 = *(longlong **)(param_1 + 0xe98);
    puVar10 = (undefined8 *)FUN_1800fbccc(0x188);
    if (puVar10 == (undefined8 *)0x0) {
      puVar10 = (undefined8 *)0x0;
    }
    else {
      puVar10 = FUN_1800c175c(puVar10,param_1,plVar2,param_2,param_4,cVar4,param_6);
    }
    if (puVar10 == (undefined8 *)0x0) {
      return -0x7ff8fff2;
    }
  }
  else {
    uVar8 = param_2[1];
    bVar12 = param_3 == 0;
    puVar9 = (undefined8 *)(param_3 + 0x88);
    if (bVar12) {
      puVar9 = (undefined8 *)&DAT_00000090;
    }
    *puVar9 = *param_2;
    puVar9[1] = uVar8;
    uVar8 = param_2[3];
    puVar9[2] = param_2[2];
    puVar9[3] = uVar8;
    uVar8 = param_2[5];
    puVar9[4] = param_2[4];
    puVar9[5] = uVar8;
    uVar8 = param_2[7];
    puVar9[6] = param_2[6];
    puVar9[7] = uVar8;
    uVar8 = param_2[9];
    puVar9[8] = param_2[8];
    puVar9[9] = uVar8;
    uVar8 = param_2[0xb];
    puVar9[10] = param_2[10];
    puVar9[0xb] = uVar8;
    uVar8 = param_2[0xd];
    puVar9[0xc] = param_2[0xc];
    puVar9[0xd] = uVar8;
    puVar9[0xe] = param_2[0xe];
    puVar6 = (uint *)(param_3 + 0x114);
    if (bVar12) {
      puVar6 = (uint *)&DAT_0000011c;
    }
    *puVar6 = param_4;
    puVar7 = (undefined1 *)(param_3 + 0x120);
    if (bVar12) {
      puVar7 = &DAT_00000128;
    }
    *puVar7 = 0;
  }
  plVar2 = puVar10 + 1;
  cVar4 = FUN_18001607c(plVar2,*(byte *)((longlong)puVar10 + 0x181),param_7);
  if (cVar4 == '\0') goto LAB_1800ba0a6;
  if (param_7 != '\0') {
    FUN_1800b1160(puVar10[0x2f],0,(longlong *)puVar10[0xd]);
    FUN_1800b1274(puVar10[0x2f],(longlong *)puVar10[0x10]);
  }
  if (param_5 != '\0') {
    if (param_3 == 0) {
      LOCK();
      *(int *)(puVar10 + 0x27) = *(int *)(puVar10 + 0x27) + 1;
      UNLOCK();
    }
    *(undefined2 *)(param_1 + 0xc50b) = 0x101;
    iVar5 = 0;
    goto LAB_1800ba015;
  }
  iVar5 = *(int *)(param_1 + 0xebc);
  if (*(int *)(param_1 + 0xeb8) == iVar5) {
    uVar11 = 0x10;
    if (iVar5 != 0) {
      uVar11 = (ulonglong)(uint)(iVar5 * 2);
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar11;
    uVar8 = SUB168(ZEXT816(8) * auVar3,0);
    if (SUB168(ZEXT816(8) * auVar3,8) != 0) {
      uVar8 = 0xffffffffffffffff;
    }
    puVar9 = (undefined8 *)thunk_FUN_1800fbccc(uVar8);
    iVar5 = -0x7ff8fff2;
    if (puVar9 != (undefined8 *)0x0) {
      FUN_1800fbec0(puVar9,*(undefined8 **)(param_1 + 0xeb0),
                    (ulonglong)*(uint *)(param_1 + 0xebc) << 3);
      FUN_1800fbcf0(*(LPVOID *)(param_1 + 0xeb0));
      *(undefined8 **)(param_1 + 0xeb0) = puVar9;
      *(int *)(param_1 + 0xebc) = (int)uVar11;
      param_4 = local_res20;
      goto LAB_1800b9f99;
    }
  }
  else {
LAB_1800b9f99:
    local_res18 = 0;
    *(longlong **)(*(longlong *)(param_1 + 0xeb0) + (ulonglong)*(uint *)(param_1 + 0xeb8) * 8) =
         plVar2;
    *(int *)(param_1 + 0xeb8) = *(int *)(param_1 + 0xeb8) + 1;
    iVar5 = FUN_1800c1cac((longlong)puVar10,(longlong *)&DAT_1800fd6e0,&local_res18);
    if (-1 < iVar5) {
      if (param_9 != (undefined8 *)0x0) {
        *param_9 = local_res18;
      }
      *(ulonglong *)(&DAT_180112b00 + (ulonglong)*(uint *)(param_1 + 0xea8) * 600) =
           *(longlong *)(&DAT_180112b00 + (ulonglong)*(uint *)(param_1 + 0xea8) * 600) -
           (ulonglong)param_4;
LAB_1800ba015:
      *param_8 = plVar2;
      if (*(char *)((longlong)param_2 + 0x71) == '\0') {
        local_48 = param_2[1];
        uStack_40 = param_2[2];
        local_30 = *(undefined4 *)(param_2 + 9);
        local_38 = param_2[3];
        FUN_180003a6c(*(longlong *)(param_1 + 0x6888),(ulonglong)*(uint *)(param_2 + 0xc),&local_48,
                      param_2 + 4);
      }
      uVar1 = *(uint *)(param_1 + 0xea8);
      if ((&DAT_180112aee)[(ulonglong)uVar1 * 600] == '\0') {
        FUN_1800029a4(*(longlong *)(param_1 + 0x6888),uVar1);
      }
      *(undefined4 *)(param_1 + 0xe88) = *(undefined4 *)(&DAT_1801123d0 + (ulonglong)uVar1 * 0x28);
      return iVar5;
    }
    FUN_180007a08(param_1,(longlong)plVar2);
  }
  FUN_1800167b8(plVar2);
LAB_1800ba0a6:
  FUN_1800c1ba0((longlong)puVar10);
  FUN_1800c1984(puVar10);
  FUN_1800fbcf0(puVar10);
  return iVar5;
}

