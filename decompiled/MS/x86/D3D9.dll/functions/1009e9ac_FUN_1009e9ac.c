/*
 * FUN_1009e9ac at 1009e9ac
 * bool __fastcall FUN_1009e9ac(void * param_1)
 * Address ranges: 1009e9ac-1009ea36
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __fastcall FUN_1009e9ac(void *param_1)

{
  int *piVar1;
  undefined4 extraout_ECX;
  bool bVar2;
  
  if (*(int *)((int)param_1 + 0x74) == 3) {
    FUN_100150c4(param_1);
    piVar1 = (int *)FUN_100cfd89((uint)*(ushort *)((int)param_1 + 0xc) *
                                 *(int *)((int)param_1 + 0x14));
    *(int **)((int)param_1 + 100) = piVar1;
    if (piVar1 != (int *)0x0) {
      FUN_100cfed0(piVar1,0,(uint)*(ushort *)((int)param_1 + 0xc) * *(int *)((int)param_1 + 0x14));
    }
    bVar2 = *(int *)((int)param_1 + 100) != 0;
  }
  else {
    FUN_100150c4(param_1);
    if (*(char *)((int)param_1 + 0x8d) != '\0') {
      FUN_1002cda3(param_1,(HANDLE)0x0,0,extraout_ECX,(void *)0x0);
    }
    bVar2 = true;
    if (*(char *)((int)param_1 + 0x48) != '\0') {
      *(undefined1 *)((int)param_1 + 0x38) = 2;
      *(undefined1 *)((int)param_1 + 0x39) = 1;
      *(undefined1 *)((int)param_1 + 0x3a) = 0;
      *(undefined4 *)((int)param_1 + 0x3c) = 3;
      *(undefined1 *)((int)param_1 + 0x40) = 2;
      *(undefined1 *)((int)param_1 + 0x41) = 1;
      *(undefined1 *)((int)param_1 + 0x42) = 0;
      *(undefined4 *)((int)param_1 + 0x44) = 4;
    }
  }
  return bVar2;
}

