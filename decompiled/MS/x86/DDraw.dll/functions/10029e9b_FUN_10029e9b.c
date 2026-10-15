/*
 * FUN_10029e9b at 10029e9b
 * undefined4 __thiscall FUN_10029e9b(void * this, int param_1, undefined4 * param_2)
 * Address ranges: 10029e9b-1002a016
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10029e9b(void *this,int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = 0;
  do {
    if (*(int *)(param_1 + iVar2 * 4) != (&DAT_10062560)[iVar2]) {
      iVar2 = 0;
      goto LAB_10029ee0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 4);
  puVar1 = (undefined4 *)FUN_10060bca(8);
  if (puVar1 == (undefined4 *)0x0) goto LAB_10029ffe;
  *puVar1 = &PTR_FUN_10064d08;
  goto LAB_10029ff9;
  while (iVar2 = iVar2 + 1, iVar2 != 4) {
LAB_10029ee0:
    if (*(int *)(param_1 + iVar2 * 4) != (&DAT_100623c0)[iVar2]) {
      iVar2 = 0;
      goto LAB_10029f13;
    }
  }
  puVar1 = (undefined4 *)FUN_10060bca(8);
  if (puVar1 == (undefined4 *)0x0) goto LAB_10029ffe;
  *puVar1 = &PTR_FUN_10064c78;
  goto LAB_10029ff9;
  while (iVar2 = iVar2 + 1, iVar2 != 4) {
LAB_10029f13:
    if (*(int *)(param_1 + iVar2 * 4) != (&DAT_100623d0)[iVar2]) {
      iVar2 = 0;
      goto LAB_10029f46;
    }
  }
  puVar1 = (undefined4 *)FUN_10060bca(8);
  if (puVar1 == (undefined4 *)0x0) goto LAB_10029ffe;
  *puVar1 = &PTR_FUN_10064bdc;
  goto LAB_10029ff9;
  while (iVar2 = iVar2 + 1, iVar2 != 4) {
LAB_10029f46:
    if (*(int *)(param_1 + iVar2 * 4) != (&DAT_100623e0)[iVar2]) {
      iVar2 = 0;
      goto LAB_10029f79;
    }
  }
  puVar1 = (undefined4 *)FUN_10060bca(8);
  if (puVar1 == (undefined4 *)0x0) goto LAB_10029ffe;
  *puVar1 = &PTR_FUN_10064b3c;
  goto LAB_10029ff9;
LAB_10029fa5:
  if (*(int *)(param_1 + iVar2 * 4) == (&DAT_10062400)[iVar2]) goto code_r0x10029fb5;
  iVar2 = 0;
  do {
    if (*(int *)(param_1 + iVar2 * 4) != (&DAT_10062430)[iVar2]) {
      return 0x80004002;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 4);
  puVar1 = (undefined4 *)FUN_10060bca(8);
  if (puVar1 == (undefined4 *)0x0) goto LAB_10029ffe;
  *puVar1 = &PTR_FUN_10064d14;
  goto LAB_10029ff9;
code_r0x10029fb5:
  iVar2 = iVar2 + 1;
  if (iVar2 == 4) goto code_r0x10029fbb;
  goto LAB_10029fa5;
code_r0x10029fbb:
  puVar1 = (undefined4 *)FUN_10060bca(8);
  if (puVar1 == (undefined4 *)0x0) {
LAB_10029ffe:
    puVar1 = (undefined4 *)0x0;
    goto LAB_1002a000;
  }
  *puVar1 = &PTR_FUN_100649c4;
  goto LAB_10029ff9;
  while (iVar2 = iVar2 + 1, iVar2 != 4) {
LAB_10029f79:
    if (*(int *)(param_1 + iVar2 * 4) != (&DAT_100623f0)[iVar2]) {
      iVar2 = 0;
      goto LAB_10029fa5;
    }
  }
  puVar1 = (undefined4 *)FUN_10060bca(8);
  if (puVar1 == (undefined4 *)0x0) goto LAB_10029ffe;
  *puVar1 = &PTR_FUN_10064a88;
LAB_10029ff9:
  puVar1[1] = this;
LAB_1002a000:
  *param_2 = puVar1;
  uVar3 = 0x8007000e;
  if (puVar1 != (undefined4 *)0x0) {
    uVar3 = 0;
  }
  return uVar3;
}

