/*
 * FUN_18008ae80 at 18008ae80
 * undefined FUN_18008ae80(void)
 * Address ranges: 18008ae80-18008b0c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18008ae80(longlong param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [56];
  
  iVar1 = (**(code **)(*param_4 + 0x50))(param_4);
  if (iVar1 == 1) {
    uVar6 = 0xf;
    uVar4 = 0x22;
  }
  else if (iVar1 == 2) {
    uVar6 = 0x10;
    uVar4 = 0x23;
  }
  else if (iVar1 == 4) {
    uVar6 = 0x11;
    uVar4 = 0x24;
  }
  else if (iVar1 == 8) {
    uVar6 = 0x12;
    uVar4 = 0x25;
  }
  else {
    if (iVar1 != 0x10) {
      return 0;
    }
    uVar6 = 0x13;
    uVar4 = 0x26;
  }
  FUN_1800e7b48(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1930),&local_a0,
                *(undefined4 *)((longlong)param_4 + 0x8c),0);
  FUN_1800e7b48(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1940),&local_98,
                *(undefined4 *)(param_3 + 0x94),*(undefined4 *)(param_2 + 0x28));
  plVar5 = *(longlong **)((longlong)param_4 + 0x7c);
  if (plVar5 == (longlong *)0x0) {
    plVar5 = *(longlong **)((longlong)param_4 + 0x74);
  }
  lVar3 = *(longlong *)(param_3 + 0x7c);
  if (lVar3 == 0) {
    lVar3 = *(longlong *)(param_3 + 0x74);
  }
  *(longlong **)(param_2 + 0x58) = plVar5;
  *(undefined8 *)(param_2 + 0x68) = local_a0;
  *(longlong *)(param_2 + 0x78) = lVar3;
  *(undefined8 *)(param_2 + 0x80) = local_98;
  *(undefined4 *)(param_2 + 0x90) = *(undefined4 *)(param_3 + 0xa8);
  FUN_18008a4a0(param_1,param_2,*(undefined4 *)(param_3 + 0x2c),
                *(undefined4 *)((longlong)param_4 + 0x2c),uVar6,0,0,0);
  if (((*(char *)(*(longlong *)(param_1 + 0x1cf10) + (ulonglong)*(uint *)(param_1 + 0x28) * 0x20 +
                 0x6e9) != '\0') && ((&DAT_180231818)[*(uint *)((longlong)param_4 + 0x2c)] != '\0'))
     && ((&DAT_180231818)[*(uint *)(param_3 + 0x2c)] != '\0')) {
    lVar3 = (**(code **)(*plVar5 + 0x50))(plVar5,auStack_88);
    iVar1 = *(int *)(lVar3 + 0x20);
    lVar3 = (**(code **)(*plVar5 + 0x50))(plVar5,auStack_88);
    if ((iVar1 - 0x2cU < 2) && (*(int *)(lVar3 + 0x20) - 0x2cU < 2)) {
      *(int *)(param_2 + 0x28) =
           *(int *)(param_2 + 0x20) +
           (*(int *)(param_2 + 0x24) + *(int *)(param_3 + 0x34)) * *(int *)(param_3 + 0x3c);
      *(int *)(param_2 + 0x34) =
           *(int *)(param_2 + 0x2c) +
           (*(int *)(param_2 + 0x30) + *(int *)((longlong)param_4 + 0x34)) *
           *(int *)((longlong)param_4 + 0x3c);
      puVar2 = (undefined8 *)
               FUN_1800e7b48(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1930),auStack_90,
                             *(undefined4 *)((longlong)param_4 + 0x8c),1);
      *(undefined8 *)(param_2 + 0x68) = *puVar2;
      FUN_18008a4a0(param_1,param_2,*(undefined4 *)(param_3 + 0x2c),
                    *(undefined4 *)((longlong)param_4 + 0x2c),uVar4,1,0,0);
    }
  }
  return 1;
}

