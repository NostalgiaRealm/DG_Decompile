/*
 * FUN_10075e10 at 10075e10
 * undefined FUN_10075e10(void)
 * Address ranges: 10075e10-10075eab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10075e10(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  code *pcVar4;
  char cVar5;
  code *extraout_w11;
  int unaff_w26;
  
  pcVar4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  puVar1 = (undefined4 *)(*(int *)(*(int *)(*(int *)(unaff_w26 + 0x18) + 0x30) + 0xc) + 0x14);
  puVar2 = (undefined4 *)*puVar1;
  puVar3 = (undefined4 *)*puVar2;
  while( true ) {
    if (puVar3 == puVar1) {
      return 0;
    }
    (*pcVar4)(puVar2 + -2);
    cVar5 = (*extraout_w11)();
    if (cVar5 != '\0') break;
    puVar2 = (undefined4 *)*puVar2;
    puVar3 = (undefined4 *)*puVar2;
  }
  return 1;
}

