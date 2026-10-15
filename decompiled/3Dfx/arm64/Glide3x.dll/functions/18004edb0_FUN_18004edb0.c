/*
 * FUN_18004edb0 at 18004edb0
 * int __cdecl FUN_18004edb0(longlong param_1, byte * param_2, longlong * param_3)
 * Address ranges: 18004edb0-18004ef97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_18004edb0(longlong param_1,byte *param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 local_40 [2];
  
  *param_3 = 0;
  iVar2 = 0;
  iVar1 = FUN_180063e48(param_2,&DAT_180065590,0x10);
  if (((((iVar1 == 0) || (iVar1 = FUN_180063e48(param_2,&DAT_180065540,0x10), iVar1 == 0)) ||
       (iVar1 = FUN_180063e48(param_2,&DAT_180065550,0x10), iVar1 == 0)) ||
      ((iVar1 = FUN_180063e48(param_2,&DAT_180065500,0x10), iVar1 == 0 ||
       (iVar1 = FUN_180063e48(param_2,&DAT_180065510,0x10), iVar1 == 0)))) ||
     (iVar1 = FUN_180063e48(param_2,&DAT_180065540,0x10), iVar1 == 0)) {
    *param_3 = param_1;
    (**(code **)(**(longlong **)(param_1 + 0x688) + 8))();
  }
  else {
    iVar2 = FUN_180063e48(param_2,&DAT_180065520,0x10);
    if (((((iVar2 == 0) && (*(int *)(param_1 + 0xb60) != 0)) ||
         ((iVar2 = FUN_180063e48(param_2,&DAT_180065530,0x10), iVar2 == 0 &&
          (1 < *(uint *)(param_1 + 0xb60))))) ||
        ((iVar2 = FUN_180063e48(param_2,&DAT_180065570,0x10), iVar2 == 0 &&
         (2 < *(uint *)(param_1 + 0xb60))))) ||
       (((iVar2 = FUN_180063e48(param_2,&DAT_180065580,0x10), iVar2 == 0 &&
         (3 < *(uint *)(param_1 + 0xb60))) ||
        (((iVar2 = FUN_180063e48(param_2,&DAT_1800654c0,0x10), iVar2 == 0 &&
          (4 < *(uint *)(param_1 + 0xb60))) ||
         ((iVar2 = FUN_180063e48(param_2,&DAT_1800654d0,0x10), iVar2 == 0 &&
          (5 < *(uint *)(param_1 + 0xb60))))))))) {
      local_40[0] = 0;
      iVar2 = (**(code **)**(undefined8 **)(param_1 + 0x688))
                        (*(undefined8 **)(param_1 + 0x688),param_2,local_40);
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

