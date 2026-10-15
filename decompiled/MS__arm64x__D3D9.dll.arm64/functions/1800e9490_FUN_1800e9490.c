/*
 * FUN_1800e9490 at 1800e9490
 * undefined FUN_1800e9490(void)
 * Address ranges: 1800e9490-1800e965b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800e9490(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 local_30 [2];
  
  *param_3 = 0;
  iVar2 = 0;
  iVar1 = func_0x000180222c00(param_2,&DAT_1802296b8,0x10);
  if ((((iVar1 == 0) || (iVar1 = func_0x000180222c00(param_2,&DAT_180229658,0x10), iVar1 == 0)) ||
      (iVar1 = func_0x000180222c00(param_2,&DAT_180229668,0x10), iVar1 == 0)) ||
     ((iVar1 = func_0x000180222c00(param_2,&DAT_180229618,0x10), iVar1 == 0 ||
      (iVar1 = func_0x000180222c00(param_2,&DAT_180229628,0x10), iVar1 == 0)))) {
    *param_3 = param_1;
    (**(code **)(**(longlong **)(param_1 + 0x688) + 8))();
  }
  else {
    iVar1 = func_0x000180222c00(param_2,&DAT_180229638,0x10);
    if (((((iVar1 == 0) && (*(int *)(param_1 + 0xb60) != 0)) ||
         ((iVar1 = func_0x000180222c00(param_2,&DAT_180229648,0x10), iVar1 == 0 &&
          (1 < *(uint *)(param_1 + 0xb60))))) ||
        ((iVar1 = func_0x000180222c00(param_2,&DAT_180229688,0x10), iVar1 == 0 &&
         (2 < *(uint *)(param_1 + 0xb60))))) ||
       ((((iVar1 = func_0x000180222c00(param_2,&DAT_180229698,0x10), iVar1 == 0 &&
          (3 < *(uint *)(param_1 + 0xb60))) ||
         ((iVar1 = func_0x000180222c00(param_2,&DAT_1802295e8,0x10), iVar1 == 0 &&
          (4 < *(uint *)(param_1 + 0xb60))))) ||
        ((iVar1 = func_0x000180222c00(param_2,&DAT_1802295f8,0x10), iVar1 == 0 &&
         (5 < *(uint *)(param_1 + 0xb60))))))) {
      local_30[0] = 0;
      iVar2 = (**(code **)**(undefined8 **)(param_1 + 0x688))
                        (*(undefined8 **)(param_1 + 0x688),param_2,local_30);
      if (-1 < iVar2) {
        *param_3 = param_1;
      }
    }
    else {
      iVar2 = -0x7fffbffe;
    }
  }
  return iVar2;
}

