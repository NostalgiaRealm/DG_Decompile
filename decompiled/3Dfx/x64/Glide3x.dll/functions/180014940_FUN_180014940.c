/*
 * FUN_180014940 at 180014940
 * undefined __fastcall FUN_180014940(longlong * param_1, uint param_2, uint param_3, uint param_4, int param_5, char param_6)
 * Address ranges: 180014940-1800149f6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180014940(longlong *param_1,uint param_2,uint param_3,uint param_4,int param_5,char param_6
                  )

{
  uint uVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar3 = (**(code **)(*param_1 + 0x58))();
  uVar1 = *(uint *)(lVar3 + 0x18);
  if (((param_3 < uVar1) && (param_4 <= uVar1)) ||
     ((*(uint *)(lVar3 + 0x1c) <= param_3 && (*(uint *)(lVar3 + 0x1c) < param_4)))) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (((*(uint *)(lVar3 + 0x1c) != uVar1) && (!bVar2)) &&
     (((param_3 != uVar1 ||
       (((param_4 != *(uint *)(lVar3 + 0x1c) || (param_5 != *(int *)(lVar3 + 0x14))) ||
        (param_6 == '\0')))) && ((*(int *)(lVar3 + 0x74) == 0 && (*(int *)(lVar3 + 0x78) == 0))))))
  {
    if ((*(byte *)(lVar3 + 0x4a) & 2) != 0) {
      (**(code **)(*param_1 + 0x40))(param_1,param_2,1,0);
      FUN_1800284f0((longlong *)param_1[1],param_2);
    }
    if (param_6 != '\0') {
      (**(code **)(*param_1 + 0x68))(param_1,param_2);
      *(undefined8 *)(lVar3 + 0x18) = 0;
    }
  }
  return;
}

