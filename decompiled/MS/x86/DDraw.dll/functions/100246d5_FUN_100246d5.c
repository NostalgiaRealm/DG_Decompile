/*
 * FUN_100246d5 at 100246d5
 * undefined4 __thiscall FUN_100246d5(void * this, int param_1, undefined4 * param_2)
 * Address ranges: 100246d5-1002481d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_100246d5(void *this,int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = 0;
  do {
    if (*(int *)(param_1 + iVar2 * 4) != (&DAT_10062560)[iVar2]) {
      iVar2 = 0;
      goto LAB_1002471a;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 4);
  puVar1 = (undefined4 *)FUN_10060bca(8);
  if (puVar1 == (undefined4 *)0x0) goto LAB_10024805;
  *puVar1 = &PTR_FUN_100649b8;
  goto LAB_10024800;
  while (iVar2 = iVar2 + 1, iVar2 != 4) {
LAB_1002471a:
    if (*(int *)(param_1 + iVar2 * 4) != (&DAT_10062380)[iVar2]) {
      iVar2 = 0;
      goto LAB_1002474d;
    }
  }
  puVar1 = (undefined4 *)FUN_10060bca(8);
  if (puVar1 == (undefined4 *)0x0) goto LAB_10024805;
  *puVar1 = &PTR_FUN_1006495c;
  goto LAB_10024800;
  while (iVar2 = iVar2 + 1, iVar2 != 4) {
LAB_1002474d:
    if (*(int *)(param_1 + iVar2 * 4) != (&DAT_10062390)[iVar2]) {
      iVar2 = 0;
      goto LAB_10024780;
    }
  }
  puVar1 = (undefined4 *)FUN_10060bca(8);
  if (puVar1 == (undefined4 *)0x0) goto LAB_10024805;
  *puVar1 = &PTR_FUN_100648fc;
  goto LAB_10024800;
LAB_100247ac:
  if (*(int *)(param_1 + iVar2 * 4) == (&DAT_100623b0)[iVar2]) goto code_r0x100247bc;
  iVar2 = 0;
  do {
    if (*(int *)(param_1 + iVar2 * 4) != (&DAT_10062440)[iVar2]) {
      return 0x80004002;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 4);
  puVar1 = (undefined4 *)FUN_10060bca(8);
  if (puVar1 == (undefined4 *)0x0) goto LAB_10024805;
  *puVar1 = &PTR_FUN_100647f8;
  goto LAB_10024800;
code_r0x100247bc:
  iVar2 = iVar2 + 1;
  if (iVar2 == 4) goto code_r0x100247c2;
  goto LAB_100247ac;
code_r0x100247c2:
  puVar1 = (undefined4 *)FUN_10060bca(8);
  if (puVar1 == (undefined4 *)0x0) {
LAB_10024805:
    puVar1 = (undefined4 *)0x0;
    goto LAB_10024807;
  }
  *puVar1 = &PTR_FUN_10064814;
  goto LAB_10024800;
  while (iVar2 = iVar2 + 1, iVar2 != 4) {
LAB_10024780:
    if (*(int *)(param_1 + iVar2 * 4) != (&DAT_100623a0)[iVar2]) {
      iVar2 = 0;
      goto LAB_100247ac;
    }
  }
  puVar1 = (undefined4 *)FUN_10060bca(8);
  if (puVar1 == (undefined4 *)0x0) goto LAB_10024805;
  *puVar1 = &PTR_FUN_1006488c;
LAB_10024800:
  puVar1[1] = this;
LAB_10024807:
  *param_2 = puVar1;
  uVar3 = 0x8007000e;
  if (puVar1 != (undefined4 *)0x0) {
    uVar3 = 0;
  }
  return uVar3;
}

