/*
 * FUN_1000f8d0 at 1000f8d0
 * undefined __fastcall FUN_1000f8d0(int * param_1)
 * Address ranges: 1000f8d0-1000f99a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1000f8d0(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uStack_8;
  
  uStack_8 = param_1;
  if (param_1[0x2e] != 0) {
    FUN_1000ef03((int)&uStack_8 + 3);
    if (DAT_100ba2bc != 0) {
      FUN_10022226(-(uint)(param_1 != (int *)0x0) & (uint)(param_1 + 10));
    }
    FUN_10023ac1();
    piVar1 = param_1 + 0x12;
    if (*(char *)((int)param_1 + 0xb5) == '\0') {
      FUN_10024b7d(param_1);
      (**(code **)(*(int *)param_1[0x11] + 0x78))(*piVar1);
      FUN_10024ba9(param_1);
      iVar2 = param_1[0x29];
      FUN_10023841(iVar2,(&DAT_100ba734)[iVar2 * 0x8a]);
      (&DAT_100ba1a4)[iVar2 * 8] = 0;
      FUN_10024bd7(param_1);
    }
    FUN_100aa8a3(DAT_100ba2b4,(HWND)*piVar1,(LONG)param_1);
    (**(code **)(*(int *)param_1[0x2e] + 0x10))();
    param_1[0x2e] = 0;
    (**(code **)(*(int *)param_1[0x11] + 100))(*piVar1);
    FUN_1000ef6a();
  }
  FUN_10024b4c();
  return;
}

