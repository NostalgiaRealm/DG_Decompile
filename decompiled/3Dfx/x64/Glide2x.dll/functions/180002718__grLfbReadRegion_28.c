/*
 * _grLfbReadRegion@28 at 180002718
 * bool __fastcall _grLfbReadRegion@28(int param_1, uint param_2, uint param_3, int param_4, int param_5)
 * Address ranges: 180002718-1800027e8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool _grLfbReadRegion_28(int param_1,uint param_2,uint param_3,int param_4,int param_5)

{
  longlong *plVar1;
  char cVar2;
  undefined *puVar3;
  
                    /* 0x2718  55  _grLfbReadRegion@28
                       0x2718  212  grLfbReadRegion */
  puVar3 = FUN_180015044();
  cVar2 = '\0';
  if (puVar3[100] != '\0') {
    LOCK();
    *(int *)(puVar3 + 0x60) = *(int *)(puVar3 + 0x60) + 1;
    UNLOCK();
    if ((((param_1 == 0) || (param_1 == 1)) || (param_1 == 2)) &&
       (((plVar1 = *(longlong **)(puVar3 + 0x18), param_2 < *(uint *)(plVar1 + 0x15) &&
         (param_3 < *(uint *)((longlong)plVar1 + 0xac))) &&
        ((param_2 < param_2 + param_4 && (param_3 < param_5 + param_3)))))) {
      cVar2 = (**(code **)(*plVar1 + 0x100))(plVar1,param_1);
    }
    LOCK();
    *(int *)(puVar3 + 0x60) = *(int *)(puVar3 + 0x60) + -1;
    UNLOCK();
  }
  return cVar2 != '\0';
}

