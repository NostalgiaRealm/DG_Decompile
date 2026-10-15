/*
 * FUN_18004b220 at 18004b220
 * int __cdecl FUN_18004b220(longlong param_1, byte * param_2, longlong * param_3)
 * Address ranges: 18004b220-18004b407
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_18004b220(longlong param_1,byte *param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 local_40 [2];
  
  *param_3 = 0;
  iVar2 = 0;
  iVar1 = FUN_180060310(param_2,&DAT_180061590,0x10);
  if (((((iVar1 == 0) || (iVar1 = FUN_180060310(param_2,&DAT_180061540,0x10), iVar1 == 0)) ||
       (iVar1 = FUN_180060310(param_2,&DAT_180061550,0x10), iVar1 == 0)) ||
      ((iVar1 = FUN_180060310(param_2,&DAT_180061500,0x10), iVar1 == 0 ||
       (iVar1 = FUN_180060310(param_2,&DAT_180061510,0x10), iVar1 == 0)))) ||
     (iVar1 = FUN_180060310(param_2,&DAT_180061540,0x10), iVar1 == 0)) {
    *param_3 = param_1;
    (**(code **)(**(longlong **)(param_1 + 0x688) + 8))();
  }
  else {
    iVar2 = FUN_180060310(param_2,&DAT_180061520,0x10);
    if (((((iVar2 == 0) && (*(int *)(param_1 + 0xb60) != 0)) ||
         ((iVar2 = FUN_180060310(param_2,&DAT_180061530,0x10), iVar2 == 0 &&
          (1 < *(uint *)(param_1 + 0xb60))))) ||
        ((iVar2 = FUN_180060310(param_2,&DAT_180061570,0x10), iVar2 == 0 &&
         (2 < *(uint *)(param_1 + 0xb60))))) ||
       (((iVar2 = FUN_180060310(param_2,&DAT_180061580,0x10), iVar2 == 0 &&
         (3 < *(uint *)(param_1 + 0xb60))) ||
        (((iVar2 = FUN_180060310(param_2,&DAT_1800614c0,0x10), iVar2 == 0 &&
          (4 < *(uint *)(param_1 + 0xb60))) ||
         ((iVar2 = FUN_180060310(param_2,&DAT_1800614d0,0x10), iVar2 == 0 &&
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

