/*
 * FUN_1800976c4 at 1800976c4
 * undefined __fastcall FUN_1800976c4(longlong param_1, int param_2, longlong param_3)
 * Address ranges: 1800976c4-180097775
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1800976c4(longlong param_1,int param_2,longlong param_3)

{
  undefined8 local_1008 [511];
  undefined8 uStack_10;
  
  uStack_10 = 0x1800976d4;
  FUN_1800aa0d0(param_1,param_3,(undefined1 *)local_1008);
  FUN_1800e4e34(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),
                *(longlong **)(param_1 + 0x1cf20),
                (longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x16d0),param_2 * 0x1000,
                param_2 * 0x1000 + 0x1000,local_1008,'\0','\x01');
  if (*(int *)(*(longlong *)(param_1 + 0x1cf18) + 4) == 0x10de) {
    FUN_1800e2d18(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),
                  *(ulonglong *)(param_1 + 0x1cf20),0,1,0);
  }
  return;
}

