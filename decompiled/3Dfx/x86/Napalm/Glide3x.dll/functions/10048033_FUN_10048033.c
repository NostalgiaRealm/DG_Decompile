/*
 * FUN_10048033 at 10048033
 * undefined4 __fastcall FUN_10048033(int param_1)
 * Address ranges: 10048033-10048148
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_10048033(int param_1)

{
  LARGE_INTEGER *lpFrequency;
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int *unaff_ESI;
  _struct_19 _Var4;
  int *piVar5;
  undefined *puVar6;
  undefined4 auStack_10 [3];
  
  uVar1 = FUN_10047eaa(param_1);
  if ((char)uVar1 != '\0') {
    uVar2 = FUN_1004ab34((void *)(param_1 + 8),(LPCSTR)**(undefined4 **)(param_1 + 0x4e8));
    if ((char)uVar2 != '\0') {
      iVar3 = (**(code **)(param_1 + 0x2a8))(&DAT_1005b0d8,(undefined4 *)(param_1 + 0x2c0));
      if ((-1 < iVar3) && (uVar2 = FUN_1004a8ec(param_1), (char)uVar2 != '\0')) {
        InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4a0));
        *(undefined4 *)(param_1 + 0x49c) = 0;
        *(undefined1 *)(param_1 + 0x2d7) = 0;
        auStack_10[0] = 0;
        piVar5 = *(int **)(param_1 + 0x2c0);
        puVar6 = &DAT_100572c0;
        iVar3 = (**(code **)*piVar5)(piVar5,&DAT_100572c0,auStack_10);
        if (-1 < iVar3) {
          iVar3 = (**(code **)(*unaff_ESI + 0x70))(unaff_ESI,0,&stack0xffffffe8,4);
          if (-1 < iVar3) {
            *(bool *)(param_1 + 0x2d7) = puVar6 == (undefined *)0x1;
          }
          (**(code **)(*piVar5 + 8))(piVar5);
        }
        lpFrequency = (LARGE_INTEGER *)(param_1 + 0x500);
        QueryPerformanceFrequency(lpFrequency);
        _Var4 = (_struct_19)__alldiv((lpFrequency->s).LowPart,*(uint *)(param_1 + 0x504),1000,0);
        lpFrequency->s = _Var4;
        *(undefined1 *)(param_1 + 0x2d8) = 0;
        *(undefined1 *)(param_1 + 0x2d4) = 1;
        return CONCAT31(_Var4.LowPart._1_3_,1);
      }
      FUN_10002ea5(param_1 + 8);
    }
    uVar1 = FUN_10047fc9(param_1);
  }
  return uVar1 & 0xffffff00;
}

