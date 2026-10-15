/*
 * FUN_180095534 at 180095534
 * undefined1 __fastcall FUN_180095534(longlong param_1, float * param_2, longlong param_3, longlong * param_4)
 * Address ranges: 180095534-180095790
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_180095534(longlong param_1,float *param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  longlong local_res20;
  uint in_stack_ffffffffffffff70;
  longlong local_88;
  longlong local_80;
  undefined1 local_78 [64];
  
  iVar1 = (**(code **)(*param_4 + 0x50))(param_4);
  if (iVar1 == 1) {
    uVar4 = 0xf;
    uVar5 = 0x22;
  }
  else if (iVar1 == 2) {
    uVar4 = 0x10;
    uVar5 = 0x23;
  }
  else if (iVar1 == 4) {
    uVar4 = 0x11;
    uVar5 = 0x24;
  }
  else if (iVar1 == 8) {
    uVar4 = 0x12;
    uVar5 = 0x25;
  }
  else {
    if (iVar1 != 0x10) {
      return 0;
    }
    uVar4 = 0x13;
    uVar5 = 0x26;
  }
  FUN_1800e1d04(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1930),&local_res20,
                *(uint *)((longlong)param_4 + 0x8c),0);
  FUN_1800e1d04(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1940),&local_88,
                *(uint *)(param_3 + 0x94),(int)param_2[10]);
  plVar3 = *(longlong **)((longlong)param_4 + 0x7c);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_4 + 0x74);
  }
  lVar2 = *(longlong *)(param_3 + 0x7c);
  if (lVar2 == 0) {
    lVar2 = *(longlong *)(param_3 + 0x74);
  }
  *(longlong *)(param_2 + 0x1a) = local_res20;
  *(longlong *)(param_2 + 0x1e) = lVar2;
  *(longlong *)(param_2 + 0x20) = local_88;
  *(longlong **)(param_2 + 0x16) = plVar3;
  in_stack_ffffffffffffff70 = in_stack_ffffffffffffff70 & 0xffffff00;
  param_2[0x24] = *(float *)(param_3 + 0xa8);
  FUN_180094c50(param_1,param_2,*(uint *)(param_3 + 0x2c),*(uint *)((longlong)param_4 + 0x2c),uVar4,
                '\0','\0',in_stack_ffffffffffffff70);
  if (((*(char *)((ulonglong)*(uint *)(param_1 + 0x28) * 0x20 + 0x6e9 +
                 *(longlong *)(param_1 + 0x1cf10)) != '\0') &&
      ((&DAT_1800fec18)[*(uint *)((longlong)param_4 + 0x2c)] != '\0')) &&
     ((&DAT_1800fec18)[*(uint *)(param_3 + 0x2c)] != '\0')) {
    lVar2 = (**(code **)(*plVar3 + 0x50))(plVar3,local_78);
    iVar1 = *(int *)(lVar2 + 0x20);
    lVar2 = (**(code **)(*plVar3 + 0x50))(plVar3,local_78);
    if ((iVar1 - 0x2cU < 2) && (*(int *)(lVar2 + 0x20) == 0x2c || *(int *)(lVar2 + 0x20) == 0x2d)) {
      param_2[10] = (float)(((int)param_2[9] + *(int *)(param_3 + 0x34)) * *(int *)(param_3 + 0x3c)
                           + (int)param_2[8]);
      param_2[0xd] = (float)(((int)param_2[0xc] + *(int *)((longlong)param_4 + 0x34)) *
                             *(int *)((longlong)param_4 + 0x3c) + (int)param_2[0xb]);
      plVar3 = FUN_1800e1d04(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1930),&local_80,
                             *(uint *)((longlong)param_4 + 0x8c),1);
      *(longlong *)(param_2 + 0x1a) = *plVar3;
      FUN_180094c50(param_1,param_2,*(uint *)(param_3 + 0x2c),*(uint *)((longlong)param_4 + 0x2c),
                    uVar5,'\x01','\0',in_stack_ffffffffffffff70 & 0xffffff00);
    }
  }
  return 1;
}

