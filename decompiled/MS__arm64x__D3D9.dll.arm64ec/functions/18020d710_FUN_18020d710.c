/*
 * FUN_18020d710 at 18020d710
 * undefined FUN_18020d710(void)
 * Address ranges: 18020d710-18020d7cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_18020d710(undefined8 param_1,longlong *param_2,ulonglong param_3)

{
  undefined *puVar1;
  char cVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  code *extraout_x11;
  code *extraout_x11_00;
  
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  cVar2 = '\x01';
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  uVar3 = (*extraout_x11)();
  if (uVar3 < (ulonglong)param_2[3]) {
    if ((param_2[1] != -1) && (cVar2 = FUN_180207560(param_2[1] + 8,0), cVar2 == '\0')) {
      return '\0';
    }
    if ((param_3 & 1) != 0) {
      lVar5 = *param_2;
      uVar4 = (*(code *)puVar1)(0x180224000);
      (*extraout_x11_00)(uVar4,param_2[3],*(undefined8 *)(lVar5 + 0x20));
      thunk_FUN_1802238ec(*(undefined8 *)(*param_2 + 0x20),0xffffffff);
    }
  }
  return cVar2;
}

