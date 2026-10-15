/*
 * FUN_180027878 at 180027878
 * undefined __fastcall FUN_180027878(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
 * Address ranges: 180027878-1800278e5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180027878(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  byte bVar2;
  undefined7 uVar3;
  byte bVar4;
  undefined7 uVar5;
  
  uVar5 = (undefined7)((ulonglong)param_3 >> 8);
  uVar3 = (undefined7)((ulonglong)param_2 >> 8);
  bVar2 = (byte)param_2;
  bVar4 = (byte)param_3;
  uVar1 = FUN_1800276a4(param_1,param_2,param_3,param_4);
  if ((char)uVar1 == '\0') {
    FUN_18000fd5c(*(longlong *)(param_1 + 0x280),CONCAT71(uVar3,bVar2),CONCAT71(uVar5,bVar4),param_4
                 );
    FUN_180027650(param_1);
    FUN_180027564(param_1,(byte)param_2,(byte)param_3);
    LeaveCriticalSection
              ((LPCRITICAL_SECTION)(*(longlong *)(*(longlong *)(param_1 + 0x280) + 0x3330) + 0x620))
    ;
  }
  return;
}

