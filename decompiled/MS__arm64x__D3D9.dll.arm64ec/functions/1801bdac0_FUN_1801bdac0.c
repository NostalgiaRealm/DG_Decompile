/*
 * FUN_1801bdac0 at 1801bdac0
 * undefined FUN_1801bdac0(void)
 * Address ranges: 1801bdac0-1801bdc73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1801bdac0(undefined8 param_1,int param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  code *extraout_x11;
  longlong lVar4;
  ulonglong uVar5;
  
  puVar2 = __hybrid_os_arm64x_dispatch_icall;
  if (param_2 == 0) {
    for (; DAT_18024d8fc != 0; DAT_18024d8fc = DAT_18024d8fc + -1) {
      if (DAT_18024d8fc == 1) {
        lVar4 = *DAT_18024d900;
        iVar3 = FUN_1801042d0(&DAT_18024d938);
        if ((iVar3 == 0) && (DAT_18024d930 != 0)) {
          thunk_FUN_180223784();
          thunk_FUN_1802237ac(DAT_18024d948);
        }
        if (*(int *)(lVar4 + 0x70) != 0) {
          uVar5 = 0;
          do {
            if ((&DAT_18024e840)[uVar5 * 0x4b] != 0) {
              (*(code *)puVar2)();
              (*extraout_x11)();
            }
            uVar1 = (int)uVar5 + 1;
            uVar5 = (ulonglong)uVar1;
          } while (uVar1 < *(uint *)(lVar4 + 0x70));
        }
        lVar4 = DAT_18024d928;
        if (DAT_18024d928 != 0) {
          FUN_18021fe78(DAT_18024d928,0);
          thunk_FUN_180223a04(*(undefined8 *)(lVar4 + 0x378),0);
          FUN_18021f148(lVar4);
        }
      }
    }
    DAT_18024d8fc = 0;
    thunk_FUN_180223860(DAT_180258900);
    DAT_180258900 = (undefined *)0x0;
  }
  else if (param_2 == 1) {
    DAT_180258900 = &DAT_18024dde0;
    DAT_180258908 = param_1;
    DAT_180258b70 = param_1;
    thunk_FUN_18022384c(&DAT_18024dde0);
    DAT_18024de08 = 0;
    DAT_18024de0c = 0;
    DAT_18024de10 = 0;
    DAT_18024d988 = &DAT_18024dde0;
    DAT_18024cfc0 = 0x100000001;
    DAT_18024cfc8 = 1;
    PTR_DAT_18024cfd0 = s__dgVoodoo__18022e1c0;
    DAT_18024cfd8 = 1;
    DAT_18024cfe0 = 0;
  }
  return 1;
}

