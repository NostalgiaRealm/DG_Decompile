/*
 * FUN_18000b108 at 18000b108
 * undefined __cdecl FUN_18000b108(longlong param_1, uint param_2, uint param_3, uint param_4, uint param_5, uint param_6)
 * Address ranges: 18000b108-18000b217
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000b108(longlong param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6
                  )

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 100) != '\0') {
    FUN_1800643e0((uint *)(param_1 + 0x60));
    plVar1 = *(longlong **)(param_1 + 0x18);
    if ((((param_2 != *(byte *)((longlong)plVar1 + 0x156)) ||
         (param_3 != *(byte *)((longlong)plVar1 + 0x157))) || (param_4 != *(byte *)(plVar1 + 0x2b)))
       || (((param_5 != *(byte *)((longlong)plVar1 + 0x159) ||
            (param_6 != *(uint *)((longlong)plVar1 + 0x15a))) ||
           (*(char *)((longlong)plVar1 + 0x29e) != '\0')))) {
      (**(code **)(*plVar1 + 400))(plVar1,param_2,param_3,param_4,param_5,param_6,0);
      *(char *)(*(longlong *)(param_1 + 0x18) + 0x156) = (char)param_2;
      *(char *)(*(longlong *)(param_1 + 0x18) + 0x157) = (char)param_3;
      *(char *)(*(longlong *)(param_1 + 0x18) + 0x158) = (char)param_4;
      *(char *)(*(longlong *)(param_1 + 0x18) + 0x159) = (char)param_5;
      *(uint *)(*(longlong *)(param_1 + 0x18) + 0x15a) = param_6 & 0xff;
      *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x29e) = 0;
      FUN_18000a6b8(param_1);
      *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x2a4) = 0;
    }
    FUN_1800643d0((uint *)(param_1 + 0x60));
  }
  return;
}

