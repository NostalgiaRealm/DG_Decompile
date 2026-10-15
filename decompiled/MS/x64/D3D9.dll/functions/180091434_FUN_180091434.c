/*
 * FUN_180091434 at 180091434
 * bool __fastcall FUN_180091434(longlong param_1)
 * Address ranges: 180091434-1800916ba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_180091434(longlong param_1)

{
  longlong *plVar1;
  undefined4 local_58;
  int local_54;
  int local_4c;
  int local_48;
  
  FUN_1800ac794(param_1,(undefined8 *)&local_58);
  plVar1 = (longlong *)(param_1 + 0x180);
  if (*(int *)(param_1 + 0x44) - 3U < 3) {
    if (*(longlong *)(param_1 + 0x198) == 0) {
      FUN_18008dfa8(plVar1,*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),
                    *(uint *)(param_1 + 0x30),*(uint *)(param_1 + 0x34),1,local_58,local_54,0,0,0,8,
                    0,0,0,'\0','\0');
      FUN_18008dfa8((longlong *)(param_1 + 0x1c0),*(undefined4 *)(param_1 + 0x24),
                    *(undefined4 *)(param_1 + 0x28),*(uint *)(param_1 + 0x30),
                    *(uint *)(param_1 + 0x34),1,local_58,local_54,0,local_48,0,0x48,0,0,0,'\0','\0')
      ;
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x198) == 0) {
      FUN_18008dfa8(plVar1,*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),
                    *(uint *)(param_1 + 0x30),*(uint *)(param_1 + 0x34),1,local_58,local_54,local_4c
                    ,0,0,0x28,0,-(uint)(*(uint *)(param_1 + 0x34) != 1) & 4,0,'\0','\0');
    }
    if (*(longlong *)(param_1 + 0x1d8) == 0) {
      FUN_18008dfa8((longlong *)(param_1 + 0x1c0),*(undefined4 *)(param_1 + 0x24),
                    *(undefined4 *)(param_1 + 0x28),*(uint *)(param_1 + 0x30),
                    *(uint *)(param_1 + 0x34),1,local_58,local_54,local_4c,0,0,0x28,0,
                    -(uint)(*(uint *)(param_1 + 0x34) != 1) & 4,0,'\0','\0');
    }
  }
  if ((*(longlong *)(param_1 + 0x198) == 0) || (*(longlong *)(param_1 + 0x1d8) == 0)) {
    FUN_18008e2ec(plVar1,*(uint *)(param_1 + 0x30),*(uint *)(param_1 + 0x34));
    FUN_18008e2ec((longlong *)(param_1 + 0x1c0),*(uint *)(param_1 + 0x30),*(uint *)(param_1 + 0x34))
    ;
  }
  return *(longlong *)(param_1 + 0x198) != 0;
}

