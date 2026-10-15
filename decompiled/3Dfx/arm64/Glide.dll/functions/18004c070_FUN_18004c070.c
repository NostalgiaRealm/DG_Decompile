/*
 * FUN_18004c070 at 18004c070
 * int __cdecl FUN_18004c070(longlong param_1, byte * param_2, longlong * param_3)
 * Address ranges: 18004c070-18004c257
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_18004c070(longlong param_1,byte *param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 local_40 [2];
  
  *param_3 = 0;
  iVar2 = 0;
  iVar1 = FUN_180061160(param_2,&DAT_180062590,0x10);
  if (((((iVar1 == 0) || (iVar1 = FUN_180061160(param_2,&DAT_180062540,0x10), iVar1 == 0)) ||
       (iVar1 = FUN_180061160(param_2,&DAT_180062550,0x10), iVar1 == 0)) ||
      ((iVar1 = FUN_180061160(param_2,&DAT_180062500,0x10), iVar1 == 0 ||
       (iVar1 = FUN_180061160(param_2,&DAT_180062510,0x10), iVar1 == 0)))) ||
     (iVar1 = FUN_180061160(param_2,&DAT_180062540,0x10), iVar1 == 0)) {
    *param_3 = param_1;
    (**(code **)(**(longlong **)(param_1 + 0x688) + 8))();
  }
  else {
    iVar2 = FUN_180061160(param_2,&DAT_180062520,0x10);
    if (((((iVar2 == 0) && (*(int *)(param_1 + 0xb60) != 0)) ||
         ((iVar2 = FUN_180061160(param_2,&DAT_180062530,0x10), iVar2 == 0 &&
          (1 < *(uint *)(param_1 + 0xb60))))) ||
        ((iVar2 = FUN_180061160(param_2,&DAT_180062570,0x10), iVar2 == 0 &&
         (2 < *(uint *)(param_1 + 0xb60))))) ||
       (((iVar2 = FUN_180061160(param_2,&DAT_180062580,0x10), iVar2 == 0 &&
         (3 < *(uint *)(param_1 + 0xb60))) ||
        (((iVar2 = FUN_180061160(param_2,&DAT_1800624c0,0x10), iVar2 == 0 &&
          (4 < *(uint *)(param_1 + 0xb60))) ||
         ((iVar2 = FUN_180061160(param_2,&DAT_1800624d0,0x10), iVar2 == 0 &&
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

