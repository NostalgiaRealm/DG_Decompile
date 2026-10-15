/*
 * FUN_18005c2d4 at 18005c2d4
 * undefined8 __fastcall FUN_18005c2d4(undefined * param_1)
 * Address ranges: 18005c2d4-18005c327
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18005c2d4(undefined *param_1)

{
  void **ppvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  ppvVar1 = &ExceptionList;
  puVar3 = (undefined8 *)(*(longlong *)((longlong)ProcessEnvironmentBlock + 0x18) + 0x20);
  puVar2 = (undefined8 *)*puVar3;
  while( true ) {
    if ((undefined8 *)*puVar2 == puVar3) {
      return (ulonglong)ppvVar1 & 0xffffffffffffff00;
    }
    ppvVar1 = (void **)(*(code *)param_1)(puVar2 + -2);
    if ((char)ppvVar1 != '\0') break;
    puVar2 = (undefined8 *)*puVar2;
  }
  return CONCAT71((int7)((ulonglong)ppvVar1 >> 8),1);
}

