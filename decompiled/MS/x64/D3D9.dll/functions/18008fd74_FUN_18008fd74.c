/*
 * FUN_18008fd74 at 18008fd74
 * undefined8 __fastcall FUN_18008fd74(longlong param_1, undefined8 param_2, int param_3)
 * Address ranges: 18008fd74-18008fe24
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18008fd74(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  byte bVar3;
  undefined8 local_38;
  uint local_30;
  uint local_2c;
  
  plVar1 = (longlong *)(param_1 + -0xe0);
  FUN_1800dfe48(*(longlong *)(param_1 + -0x90),param_2,(longlong)plVar1);
  plVar2 = *(longlong **)(*(longlong *)(param_1 + -0x88) + 8);
  (**(code **)(*plVar2 + 0x78))
            (plVar2,*(undefined8 *)(param_1 + -0x28),
             param_3 * *(int *)(param_1 + -0xa4) + (int)param_2);
  bVar3 = (byte)param_2;
  local_38 = 0;
  local_30 = FUN_1800ac71c((longlong)plVar1,*(uint *)(param_1 + -0xbc),bVar3);
  local_2c = FUN_1800ac758((longlong)plVar1,*(uint *)(param_1 + -0xb8),bVar3);
  (**(code **)(*plVar1 + 0x10))(plVar1,(int)param_2 + param_3 * *(int *)(param_1 + -0xa4),&local_38)
  ;
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1 + -0x90) + 0x620));
  return 0;
}

