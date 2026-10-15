/*
 * FUN_10023308 at 10023308
 * undefined4 __stdcall FUN_10023308(int param_1, uint * param_2, int param_3)
 * Address ranges: 10023308-100233b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10023308(int param_1,uint *param_2,int param_3)

{
  BOOL BVar1;
  SIZE_T SVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  BVar1 = TryEnterCriticalSection(DAT_1006c254);
  if (BVar1 == 0) {
    FUN_10001a5c((PRTL_CRITICAL_SECTION_DEBUG)0x0);
  }
  uVar4 = 0x88760082;
  if (((*(char *)(param_1 + 0x5c) == '\0') || (uVar4 = 0x80070057, param_3 != 0)) ||
     (uVar4 = 0x88760237, *(int *)(param_1 + 0x4c) != 0)) goto LAB_100233a4;
  if (param_2 == (uint *)0x0) {
    FUN_10022f35(param_1);
  }
  else {
    uVar4 = 0x8876006e;
    if (((*param_2 < 0x20) || (param_2[1] != 1)) || (param_2[2] == 0)) goto LAB_100233a4;
    SVar2 = param_2[2] * 0x10 + *param_2;
    uVar4 = 0x8007000e;
    FUN_10022f35(param_1);
    puVar3 = (undefined4 *)FUN_10060bfe(SVar2);
    *(undefined4 **)(param_1 + 0x54) = puVar3;
    if (puVar3 == (undefined4 *)0x0) goto LAB_100233a4;
    FUN_10060d80(puVar3,param_2,SVar2);
  }
  uVar4 = 0;
LAB_100233a4:
  LeaveCriticalSection(DAT_1006c254);
  return uVar4;
}

