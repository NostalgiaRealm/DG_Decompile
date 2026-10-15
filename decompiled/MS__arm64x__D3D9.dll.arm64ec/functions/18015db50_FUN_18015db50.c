/*
 * FUN_18015db50 at 18015db50
 * undefined FUN_18015db50(void)
 * Address ranges: 18015db50-18015dbc7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18015db50(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong local_30 [2];
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  local_30[0] = lVar2;
  thunk_FUN_1802236f8(lVar1 + 0xf888);
  uVar3 = FUN_180160cc0(lVar1 + 0xf808,lVar2);
  if (((uVar3 & 1) == 0) &&
     (puVar4 = (undefined8 *)FUN_180161530(lVar1 + 0xf830,local_30), puVar4 != (undefined8 *)0x0)) {
    FUN_180161148(lVar1 + 0xf808,lVar2,*puVar4,1);
  }
  thunk_FUN_18022370c(lVar1 + 0xf888);
  return;
}

