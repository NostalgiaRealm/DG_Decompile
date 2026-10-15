/*
 * FUN_18002bf30 at 18002bf30
 * undefined __fastcall FUN_18002bf30(int * param_1, uint param_2)
 * Address ranges: 18002bf30-18002c35c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18002bf30(int *param_1,uint param_2)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if (param_2 < 10) {
    if (param_2 == 9) {
      auVar3._0_4_ = (float)(int)(short)*param_1;
      auVar3._4_4_ = (float)(int)*(short *)((longlong)param_1 + 2);
      auVar3._8_8_ = 0x46fffe0000000000;
      divps(auVar3,_DAT_180107c40);
    }
  }
  else if (param_2 == 10) {
    auVar6._0_4_ = (float)(int)(short)*param_1;
    auVar6._12_4_ = (float)(int)*(short *)((longlong)param_1 + 6);
    auVar6._8_4_ = (float)(int)(short)param_1[1];
    auVar6._4_4_ = (float)(int)*(short *)((longlong)param_1 + 2);
    divps(auVar6,_DAT_180107c40);
  }
  else if (param_2 == 0xb) {
    auVar4._0_4_ = (float)(int)(short)*param_1;
    auVar4._4_4_ = (float)(int)*(short *)((longlong)param_1 + 2);
    auVar4._8_8_ = 0x477fff0000000000;
    divps(auVar4,_DAT_180107c50);
  }
  else if (param_2 == 0xc) {
    auVar5._0_4_ = (float)(int)(short)*param_1;
    auVar5._12_4_ = (float)(int)*(short *)((longlong)param_1 + 6);
    auVar5._8_4_ = (float)(int)(short)param_1[1];
    auVar5._4_4_ = (float)(int)*(short *)((longlong)param_1 + 2);
    divps(auVar5,_DAT_180107c50);
  }
  else if ((((param_2 != 0xd) && (param_2 != 0xe)) && (param_2 != 0xf)) && (param_2 == 0x10)) {
    iVar1 = *param_1;
    auVar2._0_4_ = (float)((iVar1 << 0x16) >> 0x16);
    auVar2._4_4_ = (float)((iVar1 << 0xc) >> 0x16);
    auVar2._8_4_ = (float)(iVar1 * 4 >> 0x16);
    auVar2._12_4_ = 0x43ff8000;
    divps(auVar2,_DAT_180107c20);
  }
  return;
}

