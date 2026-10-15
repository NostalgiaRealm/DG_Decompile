/*
 * FUN_1800a51e4 at 1800a51e4
 * uint __fastcall FUN_1800a51e4(longlong * param_1, uint * param_2, uint param_3, int param_4, uint param_5)
 * Address ranges: 1800a51e4-1800a5385
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1800a51e4(longlong *param_1,uint *param_2,uint param_3,int param_4,uint param_5)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = *param_2;
  uVar5 = 0;
  if ((((*(char *)((longlong)param_2 + 5) == '\0') && (*(char *)((longlong)param_2 + 6) == '\0')) &&
      (*(char *)((longlong)param_2 + 7) == '\0')) && ((char)param_2[2] == '\0')) {
    uVar4 = param_3;
    if ((param_5 != 0) && ((uVar3 & 0xc00) == 0)) {
      uVar4 = param_5;
    }
  }
  else {
    uVar4 = FUN_1800ec8c0((longlong)(param_2 + 4),4,'\x01');
  }
  bVar2 = *(byte *)((longlong)param_2 + 0x6d);
  puVar1 = param_2 + 4;
  param_2[(ulonglong)bVar2 + 0x22] = 4;
  FUN_1800a4d10(param_1,(longlong)param_2,(ulonglong)param_3,(ulonglong)(bVar2 | 0x410700),uVar4);
  if ((*param_2 & 0x400) != 0) {
    uVar5 = FUN_1800a47b0((longlong)param_2,uVar4,
                          -(uint)((char)param_2[2] != '\0') & 2 |
                          (uint)(*(char *)((longlong)param_2 + 7) != '\0'));
    bVar2 = *(byte *)((longlong)param_2 + 0x6e);
    param_2[(ulonglong)bVar2 + 0x22] = 4;
    FUN_1800a4d10(param_1,(longlong)param_2,(ulonglong)param_3,(ulonglong)(bVar2 | 0x410700),uVar5);
  }
  if (param_3 != uVar4) {
    FUN_1800ec960((longlong)puVar1,param_3);
  }
  if (((uVar3 & 0xc00) != 0) &&
     ((FUN_1800a4b10(param_1,param_2,uVar4,uVar5,param_4,0), (char)uVar5 != (char)uVar4 ||
      (((byte)(uVar5 >> 8) & 0x3f) != ((byte)(uVar4 >> 8) & 0x3f))))) {
    FUN_1800ec960((longlong)puVar1,uVar5);
  }
  if ((param_5 != 0) && (uVar4 != param_5)) {
    FUN_1800edbe0(puVar1,param_1,0x36,(ulonglong)param_5);
    FUN_1800ec960((longlong)puVar1,uVar4);
    uVar4 = param_5;
  }
  return uVar4;
}

