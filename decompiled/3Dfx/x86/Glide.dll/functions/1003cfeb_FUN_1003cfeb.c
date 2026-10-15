/*
 * FUN_1003cfeb at 1003cfeb
 * undefined4 * __fastcall FUN_1003cfeb(int param_1, int param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, char * param_8, undefined4 param_9)
 * Address ranges: 1003cfeb-1003d040
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall
FUN_1003cfeb(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,char *param_8,undefined4 param_9)

{
  void *this;
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = 0x968;
  this = (void *)FUN_1004f99f(0x968);
  if ((this != (void *)0x0) &&
     (puVar1 = FUN_1003caa4(this,param_1,param_2,param_3,param_4,param_5,uVar2,uVar2,param_8,param_9
                           ), puVar1 != (undefined4 *)0x0)) {
    uVar2 = FUN_1003d041(puVar1);
    if ((char)uVar2 != '\0') {
      return puVar1;
    }
    FUN_1003ac2c(puVar1);
  }
  return (undefined4 *)0x0;
}

