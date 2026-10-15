/*
 * FUN_1800096b8 at 1800096b8
 * ulonglong __cdecl FUN_1800096b8(undefined8 param_1, undefined8 param_2, undefined4 * param_3)
 * Address ranges: 1800096b8-18000987f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800096b8(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  uint uVar3;
  HANDLE pvVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int *piVar9;
  longlong lVar10;
  undefined4 *puVar11;
  longlong extraout_x15;
  ulonglong uVar12;
  undefined1 auVar13 [16];
  
  auVar13 = FUN_1800014c0();
  lVar2 = extraout_x15 * -0x10;
  puVar11 = (undefined4 *)0x0;
  WideCharToMultiByte(0,0x200,auVar13._8_8_,-1,&stack0x000004b0 + lVar2,0x1ffe,(LPCSTR)0x0,
                      (LPBOOL)0x0);
  FUN_180005d80((undefined8 *)(&stack0x000002a0 + lVar2));
  *(undefined ***)(&stack0xffffffffffffffd0 + lVar2) = &PTR_FUN_180061a40;
  lVar10 = 0;
  piVar9 = (int *)0x80;
  (&stack0xffffffffffffffe0)[lVar2] = 1;
  uVar8 = 3;
  uVar7 = 0;
  pvVar4 = CreateFileW(auVar13._8_8_,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  *(HANDLE *)(&stack0xffffffffffffffd8 + lVar2) = pvVar4;
  if ((longlong)pvVar4 - 1U < 0xfffffffffffffffe) {
    uVar5 = FUN_18000f448(auVar13._0_8_,(longlong *)(&stack0xffffffffffffffd0 + lVar2));
    uVar12 = uVar5 & 0xff;
    if ((uVar5 & 0xff) == 0) {
      *(undefined ***)(&stack0xffffffffffffffe8 + lVar2) = &PTR_FUN_180062c58;
      *(undefined8 *)(&stack0xfffffffffffffff0 + lVar2) = 0;
      *(undefined4 *)(&stack0xfffffffffffffff8 + lVar2) = 0;
      *(undefined8 *)(&stack0x00000000 + lVar2) = 0;
      *(undefined4 *)(&stack0x00000008 + lVar2) = 0;
      *(undefined8 *)(&stack0x00000010 + lVar2) = 0;
      *(undefined8 *)(&stack0x00000018 + lVar2) = 0;
      *(undefined8 *)(&stack0x00000020 + lVar2) = 0;
      *(undefined8 *)(&stack0x00000028 + lVar2) = 0;
      *(undefined8 *)(&stack0x00000030 + lVar2) = 0;
      (&stack0x00000038)[lVar2] = 1;
      *(undefined4 *)(&stack0x0000003c + lVar2) = 0;
      *(undefined8 *)(&stack0x00000040 + lVar2) = 0;
      *(undefined8 *)(&stack0x00000048 + lVar2) = 0;
      *(undefined4 *)(&stack0x00000050 + lVar2) = 0;
      *(undefined8 *)(&stack0x00000058 + lVar2) = 0;
      *(undefined8 *)(&stack0x00000060 + lVar2) = 0;
      *(undefined8 *)(&stack0x00000068 + lVar2) = 0;
      *(undefined4 *)(&stack0x00000070 + lVar2) = 0;
      *(undefined8 *)(&stack0x00000078 + lVar2) = 0;
      *(undefined8 *)(&stack0x00000080 + lVar2) = 0;
      *(undefined4 *)(&stack0x00000088 + lVar2) = 0;
      if (param_3 != (undefined4 *)0x0) {
        uVar1 = param_3[1];
        *(undefined4 *)(&stack0xfffffffffffffff0 + lVar2) = *param_3;
        *(undefined4 *)(&stack0xfffffffffffffff4 + lVar2) = uVar1;
        *(undefined4 *)(&stack0xfffffffffffffff8 + lVar2) = param_3[2];
        *(char **)(&stack0x00000000 + lVar2) = "[dgVoodoo IniParser] ";
        *(undefined4 *)(&stack0x00000008 + lVar2) = param_3[6];
      }
      uVar3 = FUN_180009f90((longlong)(&stack0xffffffffffffffe8 + lVar2),
                            (undefined8 *)(&stack0xffffffffffffffd0 + lVar2),1);
      if ((uVar3 & 1) != 0) {
        uVar3 = FUN_18000ed50((undefined4 *)(&stack0x000002a0 + lVar2),
                              (longlong *)(&stack0xffffffffffffffe8 + lVar2),param_3,uVar7,uVar8,
                              piVar9,lVar10,puVar11);
        uVar12 = (ulonglong)(byte)uVar3;
        if ((uVar3 & 0xff) == 0) {
          FUN_180060360(&stack0x00000090 + lVar2,0,0x20c);
          puVar6 = (undefined8 *)FUN_180005d80((undefined8 *)(&stack0x00000090 + lVar2));
        }
        else {
          thunk_FUN_180001218((undefined8 *)(&stack0x00000090 + lVar2),
                              (undefined8 *)(&stack0x000002a0 + lVar2),0x20c);
          puVar6 = (undefined8 *)(&stack0x00000090 + lVar2);
        }
        thunk_FUN_180001218((undefined8 *)auVar13._0_8_,puVar6,0x20c);
      }
      FUN_180009ec0((undefined8 *)(&stack0xffffffffffffffe8 + lVar2));
    }
  }
  else {
    uVar12 = 0;
  }
  FUN_180008750((undefined8 *)(&stack0xffffffffffffffd0 + lVar2));
  return uVar12;
}

