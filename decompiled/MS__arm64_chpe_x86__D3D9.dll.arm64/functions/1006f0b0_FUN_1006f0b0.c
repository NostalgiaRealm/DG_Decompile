/*
 * FUN_1006f0b0 at 1006f0b0
 * undefined FUN_1006f0b0(void)
 * Address ranges: 1006f0b0-1006f147
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006f0b0(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  int local_30 [4];
  
  iVar1 = *param_1;
  iVar2 = param_1[1];
  local_30[0] = iVar2;
  (*(code *)PTR_FUN_1016c074)(iVar1 + 0xf7c8);
  uVar4 = FUN_10070c78(iVar1 + 0xf768,iVar2);
  if (((uVar4 & 1) == 0) &&
     (puVar3 = (undefined8 *)FUN_10071730(iVar1 + 0xf77c,local_30), puVar3 != (undefined8 *)0x0)) {
    FUN_10071158(iVar1 + 0xf768,iVar2,*puVar3,1);
  }
  (*(code *)PTR_FUN_1016c0c0)(iVar1 + 0xf7c8);
  return;
}

