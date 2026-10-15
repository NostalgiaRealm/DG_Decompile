/*
 * FUN_100444d8 at 100444d8
 * undefined FUN_100444d8(void)
 * Address ranges: 100444d8-10044623
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100444d8(int param_1,uint param_2,int *param_3)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  code *extraout_w11;
  
  iVar2 = (*(code *)PTR_FUN_100ba150)(DAT_100c2958);
  if (iVar2 == 0) {
    FUN_10001c10(0);
  }
  uVar3 = 0x80070057;
  if ((((param_2 & 0xffffffe0) == 0) && ((param_2 & 0x1e) < 0x11)) &&
     ((0x10114U >> (ulonglong)(param_2 & 0x1e) & 1) != 0)) {
    if ((param_3 != (int *)0x0) && (*param_3 == param_3[1])) {
      param_2 = param_2 & 0xfffffffe;
    }
    uVar3 = 0x80004001;
    if ((((param_2 & 0x17) == 0) && ((*(uint *)(param_1 + 0x1b8) >> 0x11 & 1) == 0)) &&
       (uVar3 = 0x887601c2, *(char *)(param_1 + 8) == '\0')) {
      puVar1 = (uint *)(param_1 + 0x154);
      if (param_3 == (int *)0x0) {
        *puVar1 = *puVar1 & 0xfffeffff;
      }
      else {
        *puVar1 = *puVar1 | 0x10000;
        *(undefined8 *)(param_1 + 400) = *(undefined8 *)param_3;
      }
      if (DAT_100c291c != 0) {
        puVar4 = (undefined4 *)(*(int *)(param_1 + 0xfc) + 0xc);
        uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
        (*extraout_w11)(uVar3,*puVar4,param_1);
      }
      uVar3 = 0;
    }
  }
  (*(code *)PTR_FUN_100ba0f0)(DAT_100c2958);
  return uVar3;
}

